import java.util.*;

public class ReverseInt {
	public int reverseInt(int n){
		String str_n = Integer.toString(n);
		char arr_n[] = str_n.toCharArray();
		Arrays.sort(arr_n);
		String str_n_sorted = new String(arr_n);
		StringBuilder sb_n = new StringBuilder(str_n_sorted);
		str_n = sb_n.reverse().toString();
		int ret = Integer.parseInt(str_n);
		return ret;
	}
  
	public static void  main(String[] args){
		ReverseInt ri = new ReverseInt();
		System.out.println(ri.reverseInt(118372));
	}
}