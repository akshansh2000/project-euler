def count_divisors(num):
    product = 1
    count = 0

    while num and num % 2 == 0:
        num //= 2
        count += 1

    product *= 1 if not count else count + 1

    for i in range(3, num + 1, 2):
        count = 0
        while num and num % i == 0:
            num //= i
            count += 1

        product *= 1 if not count else count + 1

    return product

i = 0
while True:
    if count_divisors((i * (i + 1)) // 2) > 500:
        break

    i += 1

print((i * (i + 1)) // 2)
