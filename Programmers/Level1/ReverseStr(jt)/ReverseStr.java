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

	// �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	public static void main(String[] args) {
		ReverseStr rs = new ReverseStr();
		System.out.println( rs.reverseStr("Zbcdefg") );
	}
}