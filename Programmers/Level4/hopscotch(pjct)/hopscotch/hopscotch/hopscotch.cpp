// hopscotch.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hopscotch(vector<vector<int> > board)
{
	int answer = -123456789;

	for (int i = 1; i < board.size(); ++i)
	{
		for (int j = 0; j < board[0].size(); ++j)
		{
			int maxNum = -123456789;
			for (int k = 0; k < board[0].size(); ++k)
			{
				if (j == k)
				{
					continue;
				}
				maxNum = max(maxNum, board[i - 1][k]);
			}
			board[i][j] += maxNum;
		}
	}

	for (int i = 0; i < board[0].size(); ++i)
	{
		answer = max(board[board.size() - 1][i], answer);
	}

	return answer;
}

int main()
{
	vector<vector<int> > test{ { 1,2,3,5 },{ 5,6,7,8 },{ 4,3,2,1 } };
	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << hopscotch(test);
}