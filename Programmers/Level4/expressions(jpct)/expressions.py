def expressions(num):
    answer = 0
    for i in range(1,num+1):
        temp=0
        while True:
            temp+=i
            i+=1
            if temp == num:
                answer+=1
                break
            if temp > num:
                break
    return answer