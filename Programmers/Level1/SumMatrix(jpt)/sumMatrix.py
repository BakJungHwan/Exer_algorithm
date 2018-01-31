def sumMatrix(A,B):
    answer = []
    for i in range(len(A)):
        row = []
        for j in range(len(A[0])):
            row.append(A[i][j]+B[i][j])
        answer.append(row)
    return answer
print(sumMatrix([[1,2], [2,3]], [[3,4],[5,6]]))