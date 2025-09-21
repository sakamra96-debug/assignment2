def calculate_sum(arr) :
    total = o                 # <- syntax / name error (using 'o' instead of 0)
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum (numbers)
print("Sumin Python :", result)
