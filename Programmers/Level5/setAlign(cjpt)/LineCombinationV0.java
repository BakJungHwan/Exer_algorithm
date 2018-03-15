import java.util.Arrays;

class LineCombinationV0 {

	public long factorial(int n)
	{
		long ret=1;
		while(n>1)
		{
			ret*=n--;
		}
		return ret;
	}

	public int[] setAlign(int n, long k) {
		int[] answer = new int[n];
		int[] now = new int[n];

		for(int i=0; i<n; ++i)
		{
			now[i] = i+1;
		}

		--k;

		for(int i=0; i<n; ++i)
		{
			Arrays.sort(now);
			long fact = factorial(n-1-i);
			answer[i] = now[(int)(k/fact)+i];
			now[(int)(k/fact)+i] = -1;
			System.out.println("k : " + k + "    fact : " + fact + "    i : " + i);
			System.out.println("(int)(k/fact)+i : " + ((int)(k/fact)+i));
			k%=fact;
		}

		return answer;
	}

	public static void main(String[] args) {
		LineCombinationV0 lc = new LineCombinationV0();
		System.out.println(Arrays.toString(lc.setAlign(15, 558104363930L)));	}
}