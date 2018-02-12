def jumpCase(num):
    temp = [1,2]
    for i in range(2,num):
        temp.append(temp[i-2]+temp[i-1])
    return temp[-1]

#아래는 테스트로 출력해 보기 위한 코드입니다.
print(jumpCase(4))