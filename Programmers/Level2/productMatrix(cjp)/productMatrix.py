def productMatrix(A, B):
    answer = []
    for i in range(len(A)):
        ans_row = []
        for j in range(len(B[0])):
            ans_row.append(sum((A[i][k]*B[k][j] for k in range(len(A[0])))))
        answer.append(ans_row)
    return answer

# 아래는 테스트로 출력해 보기 위한 코드입니다.
a = [ [ 1, 2 ], [ 2, 3 ]];
b = [[ 3, 4], [5, 6]];
print("결과 : {}".format(productMatrix(a,b)));