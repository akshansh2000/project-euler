pre_previous = 1
previous = 2
total = 2

while previous + pre_previous < 4e6:
    current = previous + pre_previous
    if current % 2 == 0:
        total += current
        
    pre_previous = previous
    previous = current

print(total)