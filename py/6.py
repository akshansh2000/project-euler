N = 100

sum_of_squares = N * (N + 1) * (2 * N + 1) // 6
square_of_sum = (N * (N + 1) // 2) ** 2

print(square_of_sum - sum_of_squares)