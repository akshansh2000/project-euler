def chain_length(num):
    result = 0
    while (num != 1):
        if num % 2 == 0:
            num //= 2
        else:
            num = 3 * num + 1
            
        result += 1
    
    return result

longest_chain_length = -1
answer = 0

for i in range(1, int(1e6 + 1)):
    temp_chain_length = chain_length(i)
    if temp_chain_length > longest_chain_length:
        longest_chain_length = temp_chain_length
        answer = i

print(answer)
