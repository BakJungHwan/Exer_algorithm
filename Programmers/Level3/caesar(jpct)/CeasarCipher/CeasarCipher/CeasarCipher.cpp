// CeasarCipher.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

string caesar(string s, int n)
{
	string answer = "";
	string temp;
	for (int i = 0; i < s.size(); ++i)
	{
		char temp = s[i];
		if (isalpha(s[i]))
		{
			if (islower(temp))
			{
				temp += n % 26;
				if (!islower(temp))
				{
					temp -= 26;
				}
			}

			if (isupper(temp))
			{
				temp += n % 26;
				if (!isupper(temp))
				{
					temp -= 26;
				}
			}
		}
		answer.append(1,temp);
	}
	return answer;
}

int main()
{
	string text = "a B z";
	int testNo = 4;

	string testAnswer = caesar(text, testNo);

	cout << testAnswer;
}