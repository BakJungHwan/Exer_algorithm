import java.lang.StringBuilder;

class StringExercise{
    String getMiddle(String word){
      int mid_index = word.length() / 2;
      StringBuilder ret = new StringBuilder();
			if(word.length() % 2 == 0)
      {
          ret.append(word.charAt(mid_index-1));
      }
    	return ret.append(word.charAt(mid_index)).toString();
    }
    // 아래는 테스트로 출력해 보기 위한 코드입니다.
    public static void  main(String[] args){
        StringExercise se = new StringExercise();
        System.out.println(se.getMiddle("power"));
    }
}