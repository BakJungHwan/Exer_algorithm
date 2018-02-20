def hopscotch(board, size):
    def dfs(f,p):
        max_val = -1
        if size == f:
            return 0
        for i in range(len(board[0])):
            if i == p:
                continue
            max_val = max(max_val,board[f][i]+dfs(f+1,i))
        return max_val
    return dfs(0,-1)

board =  [[ 1, 2, 3, 5 ], [ 5, 6, 7, 8 ], [4, 3, 2, 1]]
print(hopscotch(board, 3))