import math

def setAlign(n, k):
    answer = []
    numLeft = list(range(1,n+1))
    while n!=0:
        fact = math.factorial(n-1)
        answer.append(numLeft.pop((k-1)//fact))
        print(k,end="")
        print("  ",end="")
        print(fact,end="")
        print("  ",end="")
        print((k-1)//fact)
        n,k = n-1, k%fact
    return answer

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(setAlign(15, 558104363930))