// eatCookie2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<iostream>
#include<vector>
using namespace std;

int eatCookie(vector<int> cookies)
{
	int answer = 0;
	vector<vector<int>> candidate;
	vector<int> first(1, cookies[cookies.size() - 1]);
	candidate.push_back(first);
	vector<int> cookies_reverse(cookies.rbegin() + 1, cookies.rend());
		
	for (int cookie : cookies_reverse)
	{
		int times = candidate.size();
		for (int i=0; i<times; ++i)
		{
			vector<int> temp;
			temp.push_back(cookie);

			if (candidate[i][0] > cookie)
			{
				for (int j=0; j<candidate[i].size() ;++j)
				{
					temp.push_back(candidate[i][j]);
				}
				candidate.push_back(temp);
			}
			else
			{
				candidate.push_back(temp);
			}
		}
	}
	for (std::vector<vector<int>>::iterator it = candidate.begin(); it != candidate.end(); ++it)
	{
		if ((*it).size() > answer)
		{
			answer = (*it).size();
		}
	}

	return answer;
}
int main()
{
	vector<int> test{ 1,4,2,6,3,4,1,5 };

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << eatCookie(test);

}