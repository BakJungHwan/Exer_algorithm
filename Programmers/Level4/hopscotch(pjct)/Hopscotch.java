class Hopscotch {
    int hopscotch(int[][] board, int size) {
        int result = -12345689;

        for(int i=1; i<board.length; ++i)
        {
            for(int j=0; j<board[0].length; ++j)
            {
                int maxNum = -123456789;
                for(int k=0; k<board[0].length; ++k)
                {
                    if(k==j)
                    {
                        continue;
                    }
                    if(maxNum < board[i-1][k])
                    {
                        maxNum = board[i-1][k];
                    }
                }
                board[i][j]+=maxNum;
            }
        }

        for(int i=0; i<board[0].length; ++i)
        {
            if(result < board[board.length-1][i])
            {
                result = board[board.length-1][i];
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Hopscotch c = new Hopscotch();
        int[][] test = { { 1, 2, 3, 5 }, { 5, 6, 7, 8 }, { 4, 3, 2, 1 } };
        System.out.println(c.hopscotch(test, 3));
    }
}