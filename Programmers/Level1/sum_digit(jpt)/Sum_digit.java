import java.util.Scanner;

class  Sum_digit
{
	public static int sum_digit(int number)
	{
		if(number < 10)
		{
			return number;
		}
		return number % 10 + sum_digit(number / 10);
	}

	public static void main(String[] args) 
	{
		Sum_digit sd = new Sum_digit();
		Scanner sc = new Scanner(System.in);
		System.out.println(Sum_digit.sum_digit(123));
	}
}
