# _*_ coding: Latin-1 _*_

def no_continuous(s):
    return [c for i,c in enumerate(s) if i==0 or s[i-1]!=s[i]]

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print( no_continuous( "133303" ))