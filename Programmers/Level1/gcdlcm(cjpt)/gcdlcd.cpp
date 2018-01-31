#include<vector>
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}

vector<int> gcdlcm(int a,int b)
{
	vector<int> answer;
	answer.push_back(gcd(a,b));
	answer.push_back(a*b/answer[0]);
	return answer;
}

int main()
{
	int a=3, b=12;
	vector<int> testAnswer = gcdlcm(a,b);

	cout<<testAnswer[0]<<" "<<testAnswer[1];
}
