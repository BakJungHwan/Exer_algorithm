def nextSqure(n):
    i = 1
    while(n > i**2):
        i = i+1
        if n == i**2:
            return (i+1)**2
    return 'no'

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print("결과 : {}".format(nextSqure(121)));