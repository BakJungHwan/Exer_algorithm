class Fibonacci {
	public long fibonacci(int num) {
		long a = 0;
		long b = 1;
		for (int i=0; i<num ; i++)
		{
			b = a+b;
			a = b-a;
		}
		return a;
	}

  // �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	public static void main(String[] args) {
		Fibonacci c = new Fibonacci();
		int testCase = 3;
		System.out.println(c.fibonacci(testCase));
	}
}