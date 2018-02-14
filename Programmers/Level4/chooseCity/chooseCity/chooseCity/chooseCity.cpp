// chooseCity.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
	if (b.first - a.first > 0)
	{
		return true;
	}
	return false;
}

int chooseCity(int n, vector<pair<int, int>> city)
{
	int answer;
	long long sum = 0;
	for (std::vector<pair<int, int>>::iterator it = city.begin(); it != city.end(); ++it)
	{
		sum += (*it).second;
	}

	long long half = sum / 2;
	if (sum % 2 == 1)
	{
		++half;
	}
	sort(city.begin(), city.end(), compare);

	long long temp = 0;
	for (int i = 0; i < city.size(); ++i)
	{
		temp += city[i].second;
		if (temp >= half)
		{
			answer = city[i].first;
			break;
		}
	}
	return answer;
}
int main()
{

	int tn = 3;
	pair<int, int> a, b, c;
	a.first = 1, a.second = 5;
	b.first = 2, b.second = 2;
	c.first = 3, c.second = 3;
	vector<pair<int, int>> tcity{ a,b,c };

	//아래는 테스트 출력을 위한 코드입니다.
	cout << chooseCity(tn, tcity);
}
