public class Expressions {

	public int expressions(int num) {
		int answer = 0;
		for(int i=1; i<=num; ++i)
		{
			int temp=i;
			int sum=temp;
			while(sum<num)
			{
				if(sum==num)
				{
					++answer;
					break;
				}
				sum += ++temp;
			}
		}
		return answer;
	}

	public static void main(String args[]) {
		Expressions expressions = new Expressions();
		System.out.println(expressions.expressions(15));
	}
}