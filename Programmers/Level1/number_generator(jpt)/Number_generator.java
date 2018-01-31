import java.util.Scanner;
import java.util.concurrent.TimeUnit;

class Number_generator 
{
	public static int[] number_generator(int x, int n)
	{
		int[] ret = new int[n];
		for(int i=0; i<5; ++i)
		{
			ret[i] = x*(i+1);
		}
		return ret;
	}

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		Number_generator Ng = new Number_generator();

		int x = sc.nextInt();
		int n = sc.nextInt();

		int[] printNg = Ng.number_generator(x,n);
		for(int i=0; i<n; ++i)
		{
			System.out.println(printNg[i]);
		}
	}
}