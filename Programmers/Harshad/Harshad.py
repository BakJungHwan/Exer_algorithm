def Harshad(n):
    def sumDigit(num):
        ret = 0
        while num > 0:
            ret += num % 10
            num //= 10
        return ret
    if n % sumDigit(n) != 0:
        return False
    return True
print(Harshad(18))