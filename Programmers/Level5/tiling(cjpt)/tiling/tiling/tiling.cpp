// tiling.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
#include<vector>
using namespace std;

int tiling(int n)
{
	int a = 1;
	int b = 1;

	for (int i = 0; i < n-1 ; ++i)
	{
		b += a % 100000;
		a = (b - a % 100000) % 100000;
	}
	return b % 100000;
}
int main()
{
	int testn = 3;
	int testAnswer = tiling(testn);

	cout << testAnswer;
}