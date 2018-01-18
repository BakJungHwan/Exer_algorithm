def divisible(arr, d):
    return [x for x in arr if x % d == 0]

arr = [5, 9, 7, 10]
print(divisible(arr,5))