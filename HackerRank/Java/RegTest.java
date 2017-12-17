import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class MyComparator implements Comparator<String>
{
	public int compare(String s1, String s2)
	{
		return	s1.compareTo(s2);
	}
}


public class RegTest {

    public static void main(String[] args) {
        Pattern p = Pattern.compile(".+@gmail.com$");
        
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        List<String> name = new ArrayList();

        for(int a0 = 0; a0 < N; a0++){
            String firstName = in.next();
            String emailID = in.next();
            
            Matcher m = p.matcher(emailID);

			

            if(m.find())
            {
				name.add(firstName);
            }
        }
        
		Collections.sort(name);
        
        for(String str : name)
        {
            System.out.println(str);
        }
        
    }
}