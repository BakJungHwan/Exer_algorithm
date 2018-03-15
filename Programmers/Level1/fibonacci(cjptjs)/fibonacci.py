fibo_list = [0,1]

def fibonacci(num):
    while len(fibo_list) < num+1:
        fibo_list.append(fibo_list[-1]+fibo_list[-2])
    return fibo_list[-1]

print(fibonacci(3))