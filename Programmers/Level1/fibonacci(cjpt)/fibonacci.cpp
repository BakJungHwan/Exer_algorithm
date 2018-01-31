#include<iostream>
using namespace std;

long long fibonacci(int n)
{
	long long n0 = 0;
	long long n1 = 1;
	for(int i=0; i<n; ++i)
	{
		n1 = n0 + n1;
		n0 = n1 - n0;
	}
	return n0;
}

int main()
{
	int testCase = 10;
	long long testAnswer = fibonacci(testCase);

	cout<<testAnswer;
}
