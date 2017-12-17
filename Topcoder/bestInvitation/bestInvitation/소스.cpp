#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

class InterestingParty
{
public :
	int bestInvitation(vector<string> first, vector<string> second)
	{
		map<string, int> dic;
		int ret=-123456789;

		for (int i = 0; i < first.size(); ++i)
		{
			++dic[first[i]];
			++dic[second[i]];
		}

		map<string, int>::iterator mapIt = dic.begin();

		while (mapIt != dic.end())
		{
			ret = max(ret, mapIt->second);
		}
		return ret;

	}
};