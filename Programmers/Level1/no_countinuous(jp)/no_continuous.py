# _*_ coding: Latin-1 _*_

def no_continuous(s):
    return [c for i,c in enumerate(s) if i==0 or s[i-1]!=s[i]]

# �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
print( no_continuous( "133303" ))