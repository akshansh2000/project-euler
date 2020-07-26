def fac(n):
    return 1 if n in [0, 1] else n * fac(n - 1)


print(sum(map(int, list(str(fac(100))))))
