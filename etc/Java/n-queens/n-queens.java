import java.lang.Math;

class n-queens 
{
	public static boolean queens(int level)
	{
		int i = 0;
		if(!promising(level))
		{
			return false;
		}else if(level == size-1)
		{
			return true;
		}else
		{
			for(i=0; i<size; i++)
			{
				cols[level] = i;
				if(queens(level+1))
				{
					return true;
				}
			}
			return false;
		}
	}

	public static boolean promising(int level)
	{
		int i = 0;
		if(level == 0)
		{
			return true;
		}else
		{
			for(i=0;i<level;i++)
			{
				if(cols[i] == cols[level])
				{
					return false;
				}
				else
				{
					if((level-i) == Math.abs((cols[i]-cols[level]))
					{
						return false;
					}
					return true;
				}
			}
		}
	}



	public static void main(String[] args) 
	{
		public int size;
		Scanner scan = new Scanner(System.in);
		System.out.print("Type the 2-Dimentional Matrix size : ");
		size = scan.nextInt();
		
		int[] cols = new int[size];


	}
}
