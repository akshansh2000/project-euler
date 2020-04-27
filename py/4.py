def isPalindrome(num):
    if str(num) == str(num)[::-1]:
        return 1

    return 0


maximum = 0

for outer in range(999, 99, -1):
    for inner in range(999, 99, -1):
        if isPalindrome(outer * inner):
            maximum = outer * inner if outer * inner > maximum else maximum

print(maximum)
