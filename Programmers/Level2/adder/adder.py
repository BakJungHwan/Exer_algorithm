def adder(a, b):
    if a > b:
        a,b = b,a
    return sum(range(a,b+1))

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print( adder(3, 5))