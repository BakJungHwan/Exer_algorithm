import java.lang.Character;

class Caesar {
  char convert(char c, int n)
  {
  	char con = c + (n%26);
    if(Character.isLowerCase(c))
    {

    }
    else if(Character.isUpperCase(c))
    {

    }
    else if(c == ' ')
    {
    	return ' ';
    }
  }
  
	String caesar(String s, int n) {
		String result = "";
		// 함수를 완성하세요.

		return result;
	}

	public static void main(String[] args) {
		Caesar c = new Caesar();
		System.out.println("s는 'a B z', n은 4인 경우: " + c.caesar("a B z", 4));
	}
}