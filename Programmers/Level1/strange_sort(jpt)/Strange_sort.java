import java.util.Comparator;
import java.util.Collection;
import java.util.ArrayList;
import java.util.Scanner;


class Strange_sort
{
	public static ArrayList<String>	strange_sort(ArrayList<String> strings, int n)
	{
		strings.sort(new indexComparator(n));
		return strings;
	}

	public static void main(String[] args) 
	{
		Strange_sort ss = new Strange_sort();

		String[] strArr = {"bed", "car", "dream", "Han", "You", "and", "Me"};
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		ArrayList<String> strings = new ArrayList<String>();
		for(String string : strArr)
		{
			strings.add(string);
		}

		ArrayList<String> ret = ss.strange_sort(strings,n);

		System.out.print("[");
		for(String string : ret)
		{
			System.out.print(string + ", ");
		}
		System.out.println("\b\b]");
	}
}

class indexComparator implements Comparator<String>
{
	int n;

	public indexComparator(int n)
	{
		this.n = n;
	}

	public 
		int compare(String o1, String o2)
	{
		return o1.charAt(n) - o2.charAt(n);
	}

	//public static boolean equals(St

}