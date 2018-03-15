def hanoi(n):
    if n==1:
        return [[1,3]]
    temp1 = []
    temp2 = []
    for mov in hanoi(n-1):
        temp1.append(list(map(lambda x: ((2*x)%3+1)%3+1,mov)))
        temp2.append(list(map(lambda x: ((x+1)*2)%3+1,mov)))
    temp1.append([1,3])
    temp1.extend(temp2)
    return temp1  # 2차원 배열을 반환해 주어야 합니다.


# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(hanoi(3))