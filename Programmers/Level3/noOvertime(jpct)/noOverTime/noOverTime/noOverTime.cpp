// noOverTime.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const int& a, const int& b)
{
	return a > b;
}


int noOvertime(int no, vector<int> works)
{
	int sum=0;
	for (std::vector<int>::iterator it = works.begin(); it != works.end(); ++it)
	{
		sum += *it;
	}

	if (no >= sum)
	{
		return 0;
	}

	while (no > 0)
	{
		sort(works.begin(), works.end(),compare);
		--works[0];
		--no;
	}

	sum = 0;
	for (std::vector<int>::iterator it = works.begin(); it != works.end(); ++it)
	{
		sum += *it * *it;
	}

	return sum;
}

int main()
{
	vector<int> works{ 12,9,7,17,32,52 };
	int testNo = 17;

	int testAnswer = noOvertime(testNo, works);

	cout << testAnswer;
}

