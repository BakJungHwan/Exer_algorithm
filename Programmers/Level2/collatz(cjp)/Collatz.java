class Collatz {
	public int collatz(int num) {
		int answer = 0;
    long temp = num;
    for(int i=0; i<500; ++i)
    {
      if(temp == 1)
      {
        return answer;
      }
      
      ++answer;
      if(temp % 2 == 0)
      {
        temp /= 2;
      }
      else
      {
        temp = temp*3+1;
      }
    }
		return -1;
	}

  
	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	public static void main(String[] args) {
		Collatz c = new Collatz();
		int ex = 6;
		System.out.println(c.collatz(ex));
	}
}