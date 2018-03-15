class EatCookie
{
	public int eatCookie(int []cookies){
		int answer = 0;
		int[] dp = new int[cookies.length];
		for(int i=0; i<dp.length; ++i)
		{
			dp[i] = 1;
		}

		for(int i=1; i<cookies.length; ++i)
		{
			for(int j=0; j<i; ++j)
			{
				if(cookies[i] > cookies[j])
				{
					if(dp[i] < dp[j]+1)
					{
						dp[i] = dp[j]+1;
					}
				}
			}
		}

		for(int i=0; i<dp.length; ++i)
		{
			answer = Math.max(answer,dp[i]);
		}

		return answer;
	}

	public static void main(String[] args) {
		EatCookie e = new EatCookie();
		int []cookies = {1, 4, 2, 6, 3, 4, 1, 5};
		System.out.println(e.eatCookie(cookies));
	}
}
