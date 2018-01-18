import java.util.*;

class Alpha_string
{
	public static boolean alpha_string46(String s)
	{
		if(!(s.length()==4 || s.length()==6))
		{
			return false;
		}
		for(int i=0; i < s.length(); i++)
		{
			char c = s.charAt(i);
			if(!(0x30 <= c && c <= 0x39))
			{
				return false;
			}
		}
		return true;
	}

	public static void main(String[] args) 
	{
		Alpha_string as = new Alpha_string();
		System.out.println(as.alpha_string46("1234"));
	}
}