import java.util.Arrays;

class Gcdlcm {

	// The function use Euclidean Algorithm to get a great common divisor
	public int gcd(int a, int b)
	{
		if(b == 0)
		{
			return a;
		}
		return gcd(b,a%b);
	}

    public int[] gcdlcm(int a, int b) {
        int[] answer = new int[2];
		answer[0] = gcd(a,b);
		answer[1] = a*b/answer[0];
        return answer;
    }

    // �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
    public static void main(String[] args) {
        Gcdlcm c = new Gcdlcm();
        System.out.println(Arrays.toString(c.gcdlcm(3, 12)));
    }
}