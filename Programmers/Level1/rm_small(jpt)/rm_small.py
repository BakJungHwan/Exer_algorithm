# _*_ coding: Latin-1 _*_

def rm_small(mylist):
    return [el for el in mylist if el != sorted(mylist)[0]]

# 아래는 테스트로 출력해 보기 위한 코드입니다.
my_list = [4, 3, 2, 1]
print("결과 {} ".format(rm_small(my_list)))