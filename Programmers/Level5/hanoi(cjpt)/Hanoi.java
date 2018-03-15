import java.util.Arrays;

class Hanoi {
	public int[][] helpHanoi(int n, int from, int via, int to) {
        if(n==1)
        {
        	int[][] answer = {{from,to}};
    		return answer;
        }

        int[][] answer = new int[(int)Math.pow(2,n)-1][2];
        int[][] temp = helpHanoi(n-1,from,to,via);
        for(int i=0; i<temp.length; ++i)
        {
        	answer[i] = temp[i];
        }
        int[] temp2 = {from,to};
        answer[temp.length] = temp2;
        temp = helpHanoi(n-1,via,from,to);
        for(int i=0; i<temp.length; ++i)
        {
        	answer[i+temp.length+1] = temp[i];
        }
		return answer;
	}

	public int[][] hanoi(int n)
	{
		return helpHanoi(n,1,2,3);
	}

	public static void main(String[] args) {
		Hanoi h = new Hanoi();
		System.out.println(Arrays.toString(h.hanoi(4)));
	}
}