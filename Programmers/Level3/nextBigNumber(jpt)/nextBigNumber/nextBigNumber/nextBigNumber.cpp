// nextBigNumber.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

#include<iostream>
using namespace std;

int howManyOnes(int n)
{
	string binary_n = bitset<32>(n).to_string();
	int count = 0;
	for (std::string::iterator it=binary_n.begin(); it != binary_n.end(); ++it)
	{
		if (*it == '1')
		{
			++count;
		}
	}
	return count;
}



int nextBigNumber(int n)
{
	int n_ones = howManyOnes(n);
	while (1)
	{
		++n;
		if (n_ones == howManyOnes(n))
		{
			break;
		}
	}
	return n;
}
int main()
{
	int n = 78;

	//아래는 테스트 출력을 위한 코드입니다.
	cout << nextBigNumber(n);
}
