class TryHelloWorld
{
    int[] months = {31,29,31,30,31,30,31,31,30,31,30,31};
    String[] weekdays = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
  
    public String getDayName(int a, int b)
    {
        int days=b;
				for(int i=0; i<a-1; ++i)
        {
          days+=months[i];
        }
        return weekdays[days%7];
    }
    public static void main(String[] args)
    {
        TryHelloWorld test = new TryHelloWorld();
        int a=5, b=24;
        System.out.println(test.getDayName(a,b));
    }
}