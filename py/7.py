from math import sqrt


def is_prime(num):
    for i in range(2, int(sqrt(num) + 1)):
        if num % i == 0:
            return False

    return True


counter = 1
i = 3

while counter < 10001:
    if is_prime(i):
        counter += 1

    i += 2

print(i - 2)
