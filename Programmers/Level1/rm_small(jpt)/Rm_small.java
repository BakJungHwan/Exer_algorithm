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


		/* File Reading�� ���� ����

		// File��ü�� �̿��غ�(FileNotFoundException�߻�)
		// ��α����� '/'���� "\\"�� �ٲ㺸�⵵ �ϰ� �����θ� ����η� �ٲ㺸�⵵ ������, Scanner���� �Է��� ���޴´�.

		File file1 = new File("D:\\MINE\\git\\Exer_algorithm\\Programmers\\rm_small\\input.txt");
		File file2 = new File("input.txt");
		File file3 = new File("\\MINE\\git\\Exer_algorithm\\Programmers\\rm_small\\input.txt");
		File file4 = new File("/MINE/git/Exer_algorithm/Programmers/rm_small/input.txt");
		// �� ��δ� ��� ���� ��θ� �ǹ��Ѵ�.

		FileInputStream fileInput = new FileInputStream(file1);


		// FileInputStream�� �̿��ϴ� ���(FileNotFoundException�߻�)

		// �ϴ� ���δ� File�� �о���� ����, File�� FileReader�� ���ΰ�, FileReader�� BufferedReader�� ���ξ� �Ѵٰ� �Ѵ�.
		// ���� �� ����� ����ϸ� ���� Scanner�� ����� �ʿ�� ����.

		//FileInputStream fileInput = new FileInputStream("D:/MINE/git/Exer_algorithm/Programmers/rm_small/input.txt");
		
		Scanner sc = new Scanner(file);
		*/

		// class��ü�� Stream�޼��带 ���
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
