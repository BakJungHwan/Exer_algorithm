// expressions.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

int expressions(int testCase)
{
	int answer = 0;
	for (int i = 1; i <= testCase; i+=2)
	{
		if (testCase % i == 0)
		{
			++answer;
		}
	}
	return answer;
}

int main()
{
	int testNo = 15;
	int testAnswer = expressions(testNo);
	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << testAnswer;
}