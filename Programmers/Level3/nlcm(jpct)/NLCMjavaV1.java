
import java.util.Arrays;

class NLCM {
	private long gcd(long a, long b)
	{
		if(b==0)
		{
			return a;
		}
		return gcd(b, a%b);
	}

	public long nlcm(int[] num) {
		if(num.length == 1)
		{
			return (long)num[0];
		}
		if(num.length == 2)
		{
			return num[0]*num[1] / gcd((long)num[0],(long)num[1]);
		}

		int[] num_next = {(int)nlcm(Arrays.copyOfRange(num,0,num.length/2)), (int)nlcm(Arrays.copyOfRange(num,num.length/2,num.length))};
		return nlcm(num_next);
	}

	public static void main(String[] args) {
		NLCM c = new NLCM();
		int[] ex = { 2, 6, 8, 14 };
		System.out.println(c.nlcm(ex));
	}
}