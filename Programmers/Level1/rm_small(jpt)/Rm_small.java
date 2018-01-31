import java.util.ArrayList;
import java.util.Scanner;
import java.util.concurrent.TimeUnit;
import java.io.File;
import java.io.FileInputStream;

class Rm_small 
{
	public static ArrayList<Integer> rm_small(ArrayList<Integer> mylist)
	{
		Integer smallest = mylist.get(0);
		for(int i=1; i<mylist.size(); ++i)
		{
			if(smallest > mylist.get(i))
			{
				smallest = mylist.get(i);
			}
		}
		mylist.remove(smallest);	
		return mylist;
	}

	public static void main(String[] args) 
	{
		Rm_small rs = new Rm_small();


		/* File Reading을 위한 실험

		// File객체를 이용해봄(FileNotFoundException발생)
		// 경로구분을 '/'에서 "\\"로 바꿔보기도 하고 절대경로를 상대경로로 바꿔보기도 했지만, Scanner에서 입력을 못받는다.

		File file1 = new File("D:\\MINE\\git\\Exer_algorithm\\Programmers\\rm_small\\input.txt");
		File file2 = new File("input.txt");
		File file3 = new File("\\MINE\\git\\Exer_algorithm\\Programmers\\rm_small\\input.txt");
		File file4 = new File("/MINE/git/Exer_algorithm/Programmers/rm_small/input.txt");
		// 네 경로는 모두 같은 경로를 의미한다.

		FileInputStream fileInput = new FileInputStream(file1);


		// FileInputStream을 이용하는 방법(FileNotFoundException발생)

		// 하는 말로는 File을 읽어오기 위해, File을 FileReader로 감싸고, FileReader는 BufferedReader로 감싸야 한다고 한다.
		// 물론 이 방식을 사용하면 굳이 Scanner를 사용할 필요는 없다.

		//FileInputStream fileInput = new FileInputStream("D:/MINE/git/Exer_algorithm/Programmers/rm_small/input.txt");
		
		Scanner sc = new Scanner(file);
		*/

		// class자체의 Stream메서드를 사용
		Scanner sc = new Scanner(Rm_small.class.getResourceAsStream("input.txt"));


		ArrayList<Integer> mylist = new ArrayList<Integer>();

		while(sc.hasNextInt())
		{
			Integer input = new Integer(sc.nextInt());
			System.out.println(input);
			mylist.add(input);
		}


		long start = System.currentTimeMillis();
		ArrayList<Integer> ans = rs.rm_small(mylist);
		long end = System.currentTimeMillis();
		
		System.out.print("[");
		for(Integer i : ans)
		{
			System.out.print(i + ", ");
		}
		System.out.println("\b\b]");


		System.out.println("Execution Time : " + (end-start));
		
	}
}
