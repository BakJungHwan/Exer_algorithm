# _*_ coding: Latin-1 _*_

def digit_reverse(n):
    return [int(c) for c in str(n)[::-1]]

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print("결과 : {}".format(digit_reverse(12345)));