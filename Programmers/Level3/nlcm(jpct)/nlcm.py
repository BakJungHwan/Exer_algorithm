def nlcm(num):
    def gcd(a,b):
        if b == 0:
            return a
        return gcd(b, a%b)
    if len(num) == 1:
        return num[0]
    if len(num) == 2:
        return num[0]*num[1]//gcd(num[0],num[1])
    return nlcm([nlcm(num[:len(num)//2]),nlcm(num[len(num)//2:])])

    return answer

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(nlcm([2,6,8,14]));