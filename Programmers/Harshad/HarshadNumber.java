public class  HarshadNumber
{
	public int sumDigit(int num)
	{
		int ret=0;
		while(num > 0)
		{
			ret += num % 10;
			num /= 10;
		}
		return ret;
	}

	public boolean isHarshad(int num)
	{
		if(num % sumDigit(num) != 0)
		{
			return false;
		}

		return true;
	}

	public static void main(String[] args) 
	{
		HarshadNumber sn = new HarshadNumber();
		System.out.println(sn.isHarshad(18));
	}
}
