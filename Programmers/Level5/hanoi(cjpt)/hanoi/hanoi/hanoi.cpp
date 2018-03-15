// hanoi.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> hanoi(int no, int from, int via, int to)
{
	vector<vector<int>> ret;
	vector<int> temp;
	temp.push_back(from);
	temp.push_back(to);
	if (no == 1)
	{
		ret.push_back(temp);
		return ret;
	}
	vector<vector<int>> front = hanoi(no - 1, from, to, via);
	for (std::vector<vector<int>>::iterator it = front.begin(); it != front.end(); ++it)
	{
		ret.push_back(*it);
	}
	ret.push_back(temp);
	front = hanoi(no - 1, via, from, to);
	for (std::vector<vector<int>>::iterator it = front.begin(); it != front.end(); ++it)
	{
		ret.push_back(*it);
	}
	return ret;
}


vector<vector<int> > hanoi(int no)
{
	return hanoi(no,1,2,3);
}
int main()
{
	int testNo = 3;

	vector<vector<int> > testAnswer = hanoi(testNo);

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	for (int i = 0; i< testAnswer.size(); i++)
	{
		for (int j = 0; j<testAnswer[i].size(); j++)
		{
			cout << testAnswer[i][j] << " ";
		}
		cout << "\n";
	}
}