from math import sqrt

num = 600851475143
max_prime_factor = 0

if num % 2 == 0:
    max_prime_factor = 2
    while num % 2 == 0:
        num //= 2

for i in range(3, int(sqrt(num)) + 1, 2):
    if num % i == 0:
        max_prime_factor = i
        while num % i == 0:
            num //= i

if num > 2:
    max_prime_factor = num

print(max_prime_factor)
