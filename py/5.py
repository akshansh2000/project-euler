from math import gcd


lcm = 1
for i in range(2, 21):
    lcm *= i // gcd(i, lcm)

print(lcm)
