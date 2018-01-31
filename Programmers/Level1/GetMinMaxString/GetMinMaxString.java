import java.lang.Integer;

public class GetMinMaxString {
    public String getMinMaxString(String str) {
        String[] temp = str.split(" ");
        int[] int_str = new int[temp.length];
          
        for(int i=0; i<temp.length; ++i)
        {
          int_str[i] = Integer.parseInt(temp[i]);
        }
        int minInt = int_str[0];
        int maxInt = int_str[0];
          
        for(int i : int_str)
        {
          if(minInt > i)
          {
            minInt = i;
          }
          if(maxInt < i)
          {
            maxInt = i;
          }
        }
        return Integer.toString(minInt) + " " + Integer.toString(maxInt);
    }

    public static void main(String[] args) {
        String str = "1 2 3 4";
        GetMinMaxString minMax = new GetMinMaxString();
        //아래는 테스트로 출력해 보기 위한 코드입니다.
        System.out.println("최대값과 최소값은?" + minMax.getMinMaxString(str));
    }
}