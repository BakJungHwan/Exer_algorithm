import java.lang.Math;

class NumOfPrime {
  boolean isPrime(int n)
  {
    for(int i=2; i< (int)Math.sqrt(n)+1;++i)
    {
      if(n%i == 0)
      {
        return false;
      }
    }
    return true;
  }

  
	int numberOfPrime(int n) {
		int result = 0;
		for(int i=2; i<n+1; ++i)
    {
      if(isPrime(i))
      {
        ++result;
      }
    }
		return result;
	}

	public static void main(String[] args) {
		NumOfPrime prime = new NumOfPrime();
		System.out.println( prime.numberOfPrime(10) );
	}
}