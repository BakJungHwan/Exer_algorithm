def bestSet(n, s):
    if n > s:
        return [-1]
    return [s//n if i<n-s%n else s//n+1 for i in range(n)]

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(bestSet(3,13))