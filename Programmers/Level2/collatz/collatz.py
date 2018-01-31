def collatz(num):
    answer = 0
    for _ in range(0,500):
        if num == 1:
            return answer
        if num % 2 is 0:
            num //= 2
        else:
            num = 3*num+1
        answer+=1
    else:
        return -1
    
    
'''재귀ver
6에서는 위 코드보다 더 빠른것 같다.

def collatz(num):
    answer = 0
    def reCollatz(num):
        nonlocal answer
        if num is 1:
            return
        answer+=1
        if num % 2 is 0:
            return reCollatz(num//2)
        else:
            return reCollatz(num*3+1)
    reCollatz(num)
    return answer
'''

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(collatz(6))