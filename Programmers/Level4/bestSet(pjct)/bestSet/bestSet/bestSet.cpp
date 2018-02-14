// bestSet.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;

vector<int> bestSet(int no, int sum)
{
	vector<int> answer(no,0);
	if (no > sum)
	{
		vector<int> ret(1, -1);
		return ret;
	}

	int i = 0;
	while (sum>0)
	{
		++answer[no-i%no-1];
		i++;
		--sum;
	}
	return answer;
}
int main()
{
	int n = 3, s = 13;
	vector<int> test = bestSet(n, s);

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	for (int i = 0; i<test.size(); i++)
		cout << test[i] << " ";
}
