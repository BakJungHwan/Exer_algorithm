#include<iostream>
using namespace std;

int collatz(int num)
{
		int answer = 0;
    long long temp = num;
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

int main()
{
	int testCase = 6;
	int testAnswer = collatz(testCase);

	cout<<testAnswer;
}