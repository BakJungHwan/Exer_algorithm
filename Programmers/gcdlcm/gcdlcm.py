def gcd(a,b):
    if b == 0:
        return a
    return gcd(b,a%b)

def gcdlcm(a, b):
    gcd_ab = gcd(a,b)
    answer = [gcd_ab, a*b//gcd_ab]
    return answer

print(gcdlcm(33,25))