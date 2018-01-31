#include<iostream>
#include<cmath>
using namespace std;
bool isPrimeNum(int num)
{
  for(int i=2; i<=int(sqrt(num)); ++i)
  {
    if(num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int numOfPrime(int n)
{
	int answer = 0;
  
  for(int i=2; i<n+1; ++i)
  {
    if(isPrimeNum(i))
    {
      ++answer;
    }
  }
  
	return answer;
}



int main()
{
	int testCase = 10;
	int testAnswer = numOfPrime(testCase);

	cout<<testAnswer;
}
