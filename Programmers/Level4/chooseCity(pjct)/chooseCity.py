def chooseCity(n,city):
    answer = 0
    city.sort()
    sum_val = sum([i[1] for i in city])
    if sum_val % 2 == 0:
        half = sum_val // 2
    else:
        half = sum_val // 2 +1
    temp = 0
    for i in range(n):
        temp += city[i][1]
        if temp>=half:
            answer=city[i][0]
            break;
    return answer

#아래 코드는 출력을 위한 테스트 코드입니다.

print(chooseCity(3,[[1,5],[2,2],[3,3]]))