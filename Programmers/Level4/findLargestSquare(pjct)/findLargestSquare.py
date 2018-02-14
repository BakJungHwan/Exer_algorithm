def findLargestSquare(board):
    answer=0
    def helper(x,y):
        if board[x][y] == "X":
            return 0
        canBe = min(len(board)-x,len(board[0])-y)
        if answer>canBe:
            return 0
        n = 0
        while True:
            for i in range(x,x+n+1):
                for j in range(y,y+n+1):
                    if i>=len(board) or j>=len(board[0]) or board[i][j]=="X":
                        return n
            n+=1
    for i in range(len(board)):
        for j in range(len(board[0])):
            answer = max(answer,helper(i,j))
    return answer ** 2



#아래 코드는 출력을 위한 테스트 코드입니다.

testBoard = [['X','O','O','O','X'],['X','O','O','O','O'],['X','X','O','O','O'],['X','X','O','O','O'],['X','X','X','X','X']]
print(findLargestSquare(testBoard))