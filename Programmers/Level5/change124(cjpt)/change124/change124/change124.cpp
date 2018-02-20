// change124.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
#include<vector>
#include<string>

using namespace std;

string change124(int no)
{
	string answer = "";
	string num = {'1','2', '4'};

	int k;
	while (no > 0)
	{
		k = --no % 3;
		no /= 3;
		answer = num[k] + answer;
	}
	return answer;
}

int main()
{
	int testNo = 10;
	string testAnswer = change124(testNo);

	cout << testAnswer;
}
