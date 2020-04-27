import sys


for c in range(998, 0, -1):
    for b in range(1, 1000 - c):
        a = 1000 - (b + c)

        if int(a**2 + b**2) == int(c**2):
            print(a * b * c)
            sys.exit(0)
