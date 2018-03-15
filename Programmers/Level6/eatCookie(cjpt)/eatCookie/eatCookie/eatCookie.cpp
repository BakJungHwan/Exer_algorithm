// eatCookie.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
#include<vector>
using namespace std;

vector<int> now;

int eatCookie(vector<int> cookies)
{
	int answer = now.size();
	if (!now.empty() && now.size() + cookies.size() < answer)
	{
		return now.size();
	}
	int temp = 0;
	for (int i=0; i<cookies.size(); ++i)
	{
		if (now.empty() || now.back() < cookies[i])
		{
			now.push_back(cookies[i]);
			vector<int> nextCookies(cookies.begin() + i, cookies.end());
			temp = eatCookie(nextCookies);
			now.pop_back();
			if (answer < temp)
			{
				answer = temp;
			}
		}
		else
		{
			continue;
		}
	}
	return answer;
}

int main()
{
	vector<int > test{ 1,4,2,6,3,4,1,5 };

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << eatCookie(test);

}