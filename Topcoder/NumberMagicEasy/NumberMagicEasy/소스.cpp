#include <iostream>
#include <vector>
#include <string>

using namespace::std;

vector<int> card1 = { 1,2,3,4,5,6,7,8 };
vector<int> card2 = { 1,2,3,4,9,10,11,12 };
vector<int> card3 = { 1,2,5,6,9,10,13,14 };
vector<int> card4 = { 1,3,5,7,9,11,13,15 };
vector<string> c = {
					"YYYYYYYYNNNNNNNN",
					"YYYYNNNNYYYYNNNN",
					"YYNNYYNNYYNNYYYY",
					"YNYNYNYNYNYNYNYN"
				};


class NumberMagicEasy
{
public:
	int theNumber(string answer)
	{
		for (int i = 1; i <= 16; ++i)
		{
			string temp = "";
			temp += c[0][i] + c[1][i] + c[2][i] + c[3][i];
			if (temp == answer)
			{
				return i;
			}
		}
	}
};