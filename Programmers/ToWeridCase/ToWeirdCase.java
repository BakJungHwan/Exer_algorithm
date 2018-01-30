import java.util.Scanner;
import java.lang.Character;

public class ToWeirdCase
{
	public static String toWeirdCase(String s)
	{
		String[] words = s.split(" ");
		String ret = "";
		for(String word : words)
		{
			String word_temp="";
			for (int i=0; i<word.length() ;i++)
			{
				if(i % 2 == 1)
				{
					word_temp += Character.toLowerCase(word.charAt(i));
				}
				else
				{
					word_temp += Character.toUpperCase(word.charAt(i));
				}
			}
			ret += word_temp + " ";
		}
		return ret;
	}



	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		System.out.println(toWeirdCase(input));
	}
}
