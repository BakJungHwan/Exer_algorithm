# _*_ coding: Latin-1 _*_

def rm_small(mylist):
    return [el for el in mylist if el != sorted(mylist)[0]]

# �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
my_list = [4, 3, 2, 1]
print("��� {} ".format(rm_small(my_list)))