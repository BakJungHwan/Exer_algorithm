# _*_ coding: Latin-1 _*_

def digit_reverse(n):
    return [int(c) for c in str(n)[::-1]]

# �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
print("��� : {}".format(digit_reverse(12345)));