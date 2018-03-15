import java.util.Arrays;

class LineCombination {
	public static long factorial(int n)
	{
		long answer=1;
		while(n>1)
		{
			answer*=n;
			--n;
		}
		return answer;
	}

	public int[] setAlign(int n, long k) {
		int[] answer = new int[n];
		int[] numLeft = new int[n];
		for(int i=0; i<n; ++i)
		{
			numLeft[i] = i+1;
		}


		int i=0;
		--k;

		while(n!=0)
		{
			Arrays.sort(numLeft);
			long fact = factorial(--n);
			int index = (int)(k/fact)+i;

			answer[i] = numLeft[index];
			numLeft[index] = -1;
			++i;
			k%=fact;
		}
		return answer;
	}

	public static void main(String[] args) {
		LineCombination lc = new LineCombination();
		System.out.println(Arrays.toString(lc.setAlign(3,5)));
	}
}

// 13, 4277636135
// 
// 
// 15, 558104363930
// [7, 6, 11, 2, 12, 10, 1, 3, 14, 15, 8, 4, 9, 5, 13]
//