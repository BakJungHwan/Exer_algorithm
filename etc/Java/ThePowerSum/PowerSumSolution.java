import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class PowerSumSolution {

private static int n;
private static int x;

	public static int PowPow(int total, int num)
		{
			int value = total - (int)Math.pow(num,x);

			if(value == 0)
			{
				return 1;
			}else if(value < 0) return 0;
			else
			{
				return PowPow(value, num+1) + PowPow(total, num+1);
			}

		}


    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
		Scanner scan = new Scanner(System.in);
		n = scan.nextInt();
		x = scan.nextInt();

		scan.close();



        
		System.out.println(PowPow(n, 1));
    }
}