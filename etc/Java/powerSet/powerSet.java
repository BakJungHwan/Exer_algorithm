class powerSet 
{
	private static char[] data = {'a', 'b', 'c', 'd', 'e', 'f'};
	private static int n = 6;
	private static boolean[] include = new boolean[n];


	public static void powerSet(int k)
	{
		int i;
		if(k == n)
		{
			System.out.print("{");
			for(i=0;i<n;i++)
			{
				if(include[i])
				{
					System.out.printf("%2c",data[i]);
				}
			}
			System.out.println(" }");
		}
		else
		{
			include[k] = true;
			powerSet(k+1);
			include[k] = false;
			powerSet(k+1);
		}

	}



	public static void main(String[] args) 
	{
		powerSet(0);
	}
}
