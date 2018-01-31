public class  ReverseInt
{
	public int reverseInt(int n){
		String str_n = Integer.toString(n);
		StringBuilder sb_n = new StringBuilder(str_n);
		str_n = sb_n.reverse().toString();
		return Integer.parseInt(str_n);
	}
  
	public static void  main(String[] args){
		ReverseInt ri = new ReverseInt();
		System.out.println(ri.reverseInt(118372));
	}
}
