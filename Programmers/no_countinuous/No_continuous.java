import java.util.Scanner;

public class No_continuous
{
	public String no_continuous(String s)
	{
		String ret = "";
		ret += s.charAt(0);
		for (int i=1; i<s.length() ;i++)
		{
			if(s.charAt(i)!=s.charAt(i-1))
			{
				ret += s.charAt(i);
			}
		}
		return ret;
	}

	public static void main(String[] args) 
	{
		No_continuous Nc = new No_continuous();

		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		System.out.println(Nc.no_continuous(input));
	}
}
