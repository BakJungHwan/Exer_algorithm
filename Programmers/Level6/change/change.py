def change(total, coin):
    answer=0
    if len(coin)==1:
        if total % coin[0]==0:
            return 1
        return 0
    if total % coin[-1]==0:
        answer+=1
    while total>0:
        answer+=change(total,coin[:-1])
        total-=coin[-1]
    return answer
print(change(10, [1, 2, 6]))