# _*_ coding: EUC-KR _*_

def Jaden_Case(s):
    return " ".join(["".join([c.upper() if i==0 and c.isalpha() else c for i,c in enumerate(word.lower())]) for word in s.split(" ")])
    
# �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
print(Jaden_Case("3people unFollowed me for the last week"))