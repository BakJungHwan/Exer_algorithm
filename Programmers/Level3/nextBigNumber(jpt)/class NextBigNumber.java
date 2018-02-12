class NextBigNumber
{
  	public int howManyOnes(int n)
    {
      String strN = Integer.toBinaryString(n);
      int count = 0;
      for(int i=0; i<strN.length(); ++i)
      {
        if(strN.charAt(i) == '1')
        {
          ++count;
        }
      }
      return count;
    }
  
    public int nextBigNumber(int n)
    {
        int ones = howManyOnes(n);
        while(true)
        {
          ++n;
          if(ones == howManyOnes(n))
          {
            break;
          }
        }
        return n;
    }
    public static void main(String[] args)
    {
        TryHelloWorld test = new TryHelloWorld();
        int n = 78;
        System.out.println(test.nextBigNumber(n));
    }
}