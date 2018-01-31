public class ReverseStr {
	public String reverseStr(String str){
    char str_arr[] = str.toCharArray();
    for(int i=0; i<str.length()-1; i++)
    {
       for(int j=0; j<str.length()-1-i; j++)
       {
         if(str_arr[j] < str_arr[j+1])
         {
           char temp = str_arr[j];
           str_arr[j] = str_arr[j+1];
           str_arr[j+1] = temp;
         }
       }
    }
    
    String ret = new String(str_arr);
		return ret;
	}

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	public static void main(String[] args) {
		ReverseStr rs = new ReverseStr();
		System.out.println( rs.reverseStr("Zbcdefg") );
	}
}