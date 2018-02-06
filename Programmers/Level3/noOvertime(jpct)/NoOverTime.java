class NoOvertime {
	public int noOvertime(int no, int[] works) {
		int result = 0;
		int sum = 0;
		for(int i=0; i<works.length; ++i)
		{
			sum += works[i];
		}

		if(sum <= no)
		{
			return 0;
		}
		int maximum = works[0];
		while(no>0)
		{
			for(int i=0;i<works.length;++i)
			{
				if(maximum < works[i])
				{
					maximum = works[i];
				}
			}

			for(int i=0; i<works.length;++i)
			{
				if(maximum == works[i])
				{
					--maximum;
					--works[i];
					--no;
					break;
				}
			}
		}
		
		for(int i=0; i<works.length; ++i)
		{
			result += works[i] * works[i];
		}
		return result;
	}

	public static void main(String[] args) {
		NoOvertime c = new NoOvertime();
		int []test = {4,3,3};
		System.out.println(c.noOvertime(4,test));
	}
}