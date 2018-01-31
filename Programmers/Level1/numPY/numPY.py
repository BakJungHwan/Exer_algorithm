def numPY(s):
    return sum([1 if c=='p' else -1 for c in s.lower() if c=='p' or c=='y']) == 0



# 아래는 테스트로 출력해 보기 위한 코드입니다.
print( numPY("pPoooyY") )
print( numPY("Pyy") )