import java.lang.Math;

class SumDivisor {
	public int sumDivisor(int num) {
		int answer = 0;
		for(int i=1; i<=Math.sqrt(num);++i)
		{
			if(num % i == 0)
			{
				if(i == num/i)
				{
					answer += i;
				}
				else
				{
					answer += i + num/i;
				}
			}
		}
		return answer;
	}

	public static void main(String[] args) {
		SumDivisor c = new SumDivisor();
		System.out.println(c.sumDivisor(9));
	}
}
