import math

def setAlign(n, k):
    answer = []
    numLeft = [i for i in range(1,k+1)]
    std = 0
    def makeAnswer(n):
        nonlocal std
        if n==1:
            answer.append(numLeft[0])
            return
        for i in range(1,n+1):
            std+=math.factorial(n-1)
            if std>=k:
                answer.append(numLeft[i-1])
                numLeft.remove(numLeft[i-1])
                std-=math.factorial(n-1)
                break
        makeAnswer(n-1)
        return
    makeAnswer(n)
    return answer


# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(setAlign(3, 5)