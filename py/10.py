from math import sqrt


def is_prime(num):
    for i in range(2, int(sqrt(num)) + 1):
        if num % i == 0:
            return False

    return True


summation = 0
for i in range(2, 2000000):
    if is_prime(i):
        summation += i

print(summation)
