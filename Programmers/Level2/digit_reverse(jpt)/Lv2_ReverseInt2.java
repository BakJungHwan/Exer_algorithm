import java.util.ArrayList;

public class Lv2_ReverseInt2 {
   public ArrayList<Integer> digit_reverse(int number) {
      ArrayList<Integer> nList = new ArrayList<>();
      
      String str = String.valueOf(number);
      int[] num = new int[str.length()];
      
      for(int i = 0; i<str.length(); i++) {
         num[i] = number % 10;
         number /= 10;
         nList.add(num[i]);
      }
      return nList;
   }
   
   
   public static void main(String[] args) {
      Lv2_ReverseInt2 reverse = new Lv2_ReverseInt2();
      System.out.print(reverse.digit_reverse(12345));
   }
}