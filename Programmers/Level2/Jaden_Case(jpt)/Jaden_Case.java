import java.util.Scanner;
import java.lang.Character;

public class Jaden_Case 
{
	public static String jaden_case(String s)
	{
		String ret = "";
		String[] words = s.split(" ");
		for(String word : words)
		{
//			if(Character.isLetter(word.charAt(0)))
//			{
				ret+=Character.toUpperCase(word.charAt(0)) + word.substring(1) + " ";
//			}
		}
		return ret;
	}

	public static void main(String[] args) 
	{
		Jaden_Case j_c = new Jaden_Case();
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		System.out.println(j_c.jaden_case(input));
	}
}