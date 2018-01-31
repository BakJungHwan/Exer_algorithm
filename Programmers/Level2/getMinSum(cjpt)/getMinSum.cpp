#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int getMinSum(vector<int> A, vector<int> B)
{
	int answer = 0;
	for(int i=0; i<A.size(); ++i)
	{
		answer += A[i]*B[A.size()-1-i];
	}
	return answer;
}
int main()
{
	int pA[] = {1,2};
	int pB[] = {3,4};
	vector<int> tA(pA,pA+sizeof(pA)/sizeof(int)), tB(pB,pB+sizeof(pB)/sizeof(int));
	
	//아래는 테스트 출력을 위한 코드입니다.
	cout<<getMinSum(tA,tB);
}
