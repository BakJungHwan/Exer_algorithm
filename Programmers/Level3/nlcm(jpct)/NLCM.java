
import java.util.Arrays;

class NLCM {
	public long nlcm(int[] num) {
		Arrays.sort(num);
		long ret=1;
		
		for(int i=2; i<=num[num.length-1]; ++i)
		{
			boolean div = false;
			int count=0;
			for(int j=0; j<num.length; ++j)
			{
				if(num[j] % i == 0)
				{
					++count;
					if(count>1)
					{
						div = true;
						break;
					}
				}
			}
			if(div)
			{
				ret*=i;
				for(int j=0; j<num.length; ++j)
				{
					if(num[j]%i == 0)
					{
						num[j] /= i;
					}
				}
				i=1;
				Arrays.sort(num);
			}
		}
		for(int i=0; i<num.length; ++i)
		{
			ret*=num[i];
		}
		return ret;
	}


	public static void main(String[] args) {
		NLCM c = new NLCM();
		int[] ex = {53, 38, 47, 51, 51, 27, 67, 78, 63, 13};
		System.out.println(c.nlcm(ex));
	}
}