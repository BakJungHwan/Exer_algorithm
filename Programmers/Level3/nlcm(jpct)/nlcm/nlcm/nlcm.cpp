// nlcm.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}



long long nlcm(vector<int> num)
{
	if (num.size() == 0)
	{
		return 1;
	}

	if (num.size() == 1)
	{
		return num[0];
	}

	if (num.size() == 2)
	{
		return num[0] * num[1] / gcd(num[0], num[1]);
	}

	vector<int> front(num.begin(), num.begin() + num.size() / 2);
	vector<int> end(num.begin() + num.size() / 2, num.end());

	/*
	vector<int> front(num.begin(),num.begin()+num.size()/2);
	cout << "Front : ";
	for (std::vector<int>::iterator it = front.begin(); it!=front.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "End : ";
	vector<int> end(num.begin() + num.size() / 2, num.end());
	for (std::vector<int>::iterator it = end.begin(); it!=end.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	*/

	return nlcm(front)*nlcm(end)/gcd(nlcm(front), nlcm(end));
}

int main()
{
	vector<int> test{ 2,6,8,14 };

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << nlcm(test);
	return 0;
}


