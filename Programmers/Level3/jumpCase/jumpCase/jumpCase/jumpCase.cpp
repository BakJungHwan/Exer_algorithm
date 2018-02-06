// jumpCase.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
#include<vector>
using namespace std;

int jumpCase(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 2;
	}

	int* arr = new int[n];
	
	arr[0] = 1;
	arr[1] = 2;

	for (int i = 2; i < n; ++i)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	int ret = arr[n - 1];

	delete arr;

	return ret;
}
int main()
{
	int test = 4;

	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << jumpCase(test);
}