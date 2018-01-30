# coding: EUC-KR

def toWeirdCase(s):
    str_tmp = []
    for word in s.split(' '):
        ret_word = ''
        for i,c in enumerate(word):
            if i % 2 == 0:
                ret_word += c.upper()
            else:
                ret_word += c.lower()
        str_tmp.append(ret_word)
    return " ".join(str_tmp)

print("결과 : {}".format(toWeirdCase("try hello world")));