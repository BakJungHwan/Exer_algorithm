import java.lang.Character;

class Caesar {
  char convert(char c, int n)
  {
    if(Character.isLowerCase(c))
    {
      c += n % 26;
      if(!Character.isLowerCase(c))
      {
        c-=26;
      }
    }
    else if(Character.isUpperCase(c))
    {
      c += n % 26;
      if(!Character.isUpperCase(c))
      {
        c-=26;
      }
    }
    return c;
  }
  
	String caesar(String s, int n) {
    StringBuilder sb = new StringBuilder();
		for(int i=0; i<s.length(); ++i)
    {
      sb.append(convert(s.charAt(i),n));
    }
    String ret = sb.toString();
		return ret;
	}

	public static void main(String[] args) {
		Caesar c = new Caesar();
		System.out.println(c.caesar("a B z", 4));
	}
}