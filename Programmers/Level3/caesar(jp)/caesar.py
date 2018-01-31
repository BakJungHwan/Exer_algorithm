def caesar(s, n):
    def cae_Char(c):
        if 'A' <= c and c <= 'Z':
            tran_C = ord(c) + (n%26)
            if tran_C > ord('Z'):
                return chr(tran_C-ord('Z')+ord('A')-1)
            return chr(tran_C)
        elif 'a' <= c and c <= 'z':
            tran_C = ord(c) + (n%26)
            if tran_C > ord('z'):
                return chr(tran_C-ord('z')+ord('a')-1)
            return chr(tran_C)
        elif c == ' ':
            return c
        return False
    return "".join([cae_Char(c) for c in s])
    # 주어진 문장을 암호화하여 반환하세요.


# 실행을 위한 테스트코드입니다.
print('s는 "a B z", n은 4인 경우: ' + caesar("a B z", 4))