import java.lang.StringBuilder;

public class Longest_palindrom
{
	private static boolean isPalindrom(String str)
	{
		StringBuilder sb = new StringBuilder(str);
		sb.reverse();
		String temp = sb.toString();
		if(str.equals(temp))
		{
			System.out.println(str);
			return true;
		}
		return false;
	}


	public static int longest_palindrom(String str)
	{
		int longest=0;
		for(int i=0; i<str.length(); ++i)
		{
			for(int j=i+1; j<=str.length(); ++j)
			{
				if(j-i+1 < longest)
				{
					continue;
				}
				String temp = str.substring(i,j);
				if(isPalindrom(temp))
				{
					if(temp.length()>longest)
					{
						longest = temp.length();
					}
				}
			}
		}
		return longest;
	}

	public static void main(String[] argv)
	{
		Longest_palindrom lp = new Longest_palindrom();
		String tot = "토마토맛토마토";

		//String to = new String(tot.getByte("euc-kr"),"utf-8");

		System.out.println(lp.longest_palindrom(tot));
	}

}