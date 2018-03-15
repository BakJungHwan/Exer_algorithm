def change(total, coin):
    answer=[[]]
    for i in range(1,total+1):
        temp1=[]
        for j in coin:
            if i==j:
                temp1.append([i])
        for j in coin:
            if i-j>0:
                for bf in answer[i-j]:
                    temp2=bf+[j]
                    temp1.append(temp2)
            answer.append(temp1)
    return answer

print(change(5, [1, 2, 5]))