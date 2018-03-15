// setAlign.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
#include<vector>
using namespace std;

long long factorial(int n)
{
	long long ret=1;
	while (n > 1)
	{
		ret *= n--;
	}
	return ret;
}

vector<int> setAlign(int n, long long cnt)
{
	vector<int> answer(n);
	vector<int> now(n);
	for (int i = 0; i < n; ++i)
	{
		now[i]=i+1;
	}

	--cnt;

	int times=n;

	for (int i = 0; i < times; ++i)
	{
		long long fact = factorial(--n);
		cout << i << "    " << cnt / fact << endl;
		answer[i]=now[cnt / fact];
		now.erase(now.begin() + (cnt / fact));
		cnt %= fact;
	}
	return answer;
}


int main()
{
	int testn = 15;
	long long testcnt = 558104363930;
	vector<int> testAnswer = setAlign(testn, testcnt);
	// 아래는 테스트로 출력해 보기 위한 코드입니다.

	for (int i = 0; i< testAnswer.size(); i++)
	{
		cout << testAnswer[i] << " ";
	}
}
