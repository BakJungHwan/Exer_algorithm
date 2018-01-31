import java.util.concurrent.TimeUnit;

import java.lang.Integer;
import java.lang.StringBuilder;

public class Digit_reverse 
{
	public static int[] digit_reverse(int n)
	{
		long startTime = System.nanoTime();
		StringBuilder sb = new StringBuilder(Integer.toString(n));
		int[] ret = new int[sb.length()];

		for(int i = 0; i<sb.length() ; ++i)
		{
			ret[i] = sb.charAt(sb.length()-1-i) - 0x30;
		}

		long endTime = System.nanoTime();
		System.out.println(endTime - startTime);

		return ret;
	}

	public static void main(String[] args) 
	{
		Digit_reverse dr = new Digit_reverse();
		int[] output = dr.digit_reverse(12345);
		for(int i : output)
		{
			System.out.print(i);
		}
		System.out.println();
	}
}