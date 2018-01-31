def is_pair(s):
    ret = 0
    first = True
    check = ""
    for c in s:
        if c=='(' or c==')':
            check = c
            if first:
                first = False
                if c==')':
                    return False
            if c=='(':
                ret+=1
            else:
                ret-=1
    if check==')' and ret == 0:
        return True
    return False

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print( is_pair("(hello)()"))
print( is_pair(")("))
print( is_pair("(()))("))