def getMinSum(A,B):
    A.sort()
    B.sort(reverse=True)
    answer = 0
    for i in range(len(A)):
        answer += A[i] * B[i]
    return answer

print(getMinSum([1,2],[3,4]))