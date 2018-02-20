class OneTwoFour {
	public String change124(int n) {
		StringBuilder sb = new StringBuilder();
		char[] standard = {'1','2','4'};

		while(n>0)
		{
			int t = n % 3;
			n/=3;
			if(t==0)
			{
				sb.append(standard[2]);
				n-=1;
			}
			else
			{
				sb.append(standard[t-1]);
			}
		}
		return sb.reverse().toString();
	}

	public static void main(String[] args) {
		OneTwoFour oneTwoFour = new OneTwoFour();
		System.out.println(oneTwoFour.change124(10));
	}
}