public class TimeTest {
  public static void main(String[] args) {
    long startTime1 = System.currentTimeMillis(); 
    String str = "";
    for(int i=0; i<10000; i++) {
      str += "*";
    }
    long endTime1 = System.currentTimeMillis();

    long startTime2 = System.currentTimeMillis();
    StringBuffer sb = new StringBuffer();
    for(int i=0; i<10000; i++) {
      sb.append("*");
    }
    long entTime2 = System.currentTimeMillis();
    
	
	long startTime3 = System.currentTimeMillis();
    StringBuilder sbi = new StringBuilder();
    for(int i=0; i<10000; i++) {
      sbi.append("*");
    }
    long entTime3 = System.currentTimeMillis();


    long duration1 = endTime1 - startTime1;
    long duration2 = entTime2 - startTime2;
	long duration3 = entTime3 - startTime3;

    System.out.println("String + 연산 소요시간: "+duration1);
    System.out.println("StringBuffer append(): "+duration2);
	    System.out.println("StringBuilder append(): "+duration2);
  }
}