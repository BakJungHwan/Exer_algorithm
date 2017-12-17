import java.lang.Math;

class nqueens 
{
	private static int size = 4;
	private static int[] cols = new int[size+1];

	public static boolean queens(int level)
	{
		int i = 0;
		if(!promising(level))
		{
			return false;
		}else if(level == size)
		{
			for(i=1;i<=size;i++)
			{
				System.out.printf("cols[%d] : %d\n", i, cols[i]);
			}
			return true;
		}else
		{
			for(i=0; i<size; i++)
			{
				cols[level+1] = i;
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
		int i;
		for(i=1;i<level;i++)
		{
			if(cols[i] == cols[level])
			{
				return false;
			}
			else
			{
				if((level-i) == Math.abs((cols[i]-cols[level])))
				{
					return false;
				}
			}
		}
		return true;
	}



	public static void main(String[] args) 
	{
		queens(0);
	}
}
