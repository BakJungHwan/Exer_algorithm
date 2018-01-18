package programmers;

import java.util.Scanner;
public class Lv1_ReverseStr {
   
   public static void main(String[] args) {
      Lv1_ReverseStr rs = new Lv1_ReverseStr();
      Scanner sc = new Scanner(System.in);
      System.out.print("정렬할 문자열 입력: ");
      System.out.println(rs.reverseStr(sc.next()));
      sc.close();
   }
   
   
   
   public String reverseStr(String str) {
      // define an array for reversing
      String [] reversing = new String[str.length()];
      for(int i=0; i<reversing.length; i++) {
         reversing[i] = str.substring(i, i+1);
      }
      
      // DESC with bubbleSort
      for(int i=reversing.length-1; i>0; i--) {
         for(int j=0; j<i; j++) {
            if(reversing[j].compareTo(reversing[j+1]) < 0) {
               String tmp = reversing[j];
               reversing[j] = reversing[j+1];
               reversing[j+1] = tmp;
            }
         }
      }
      // define a new String to be returned
      String reversed = "";
      for(int i=0; i<reversing.length; i++) {
         reversed += reversing[i];
      }
      return reversed;
   }
}