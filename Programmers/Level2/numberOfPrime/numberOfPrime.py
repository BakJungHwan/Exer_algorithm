import math

def numberOfPrime(n):
    def isPrime(n):
        for i in range(2,int(math.sqrt(n))+1):
            if n % i == 0:
                return 0
        return 1
    return sum([isPrime(check) for check in range(2,n+1)])

print(numberOfPrime(10))