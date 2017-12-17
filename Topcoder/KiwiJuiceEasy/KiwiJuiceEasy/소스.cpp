#include <iostream>
#include <algorithm>
#include <vector>

using namespace::std;

class KiwiJuiceEasy
{
public:
	vector<int> thePouring(vector <int> capacities, vector <int> bottles, vector <int> fromId, vector <int> toId)
	{
		vector<int>::iterator fromIdIt = fromId.begin();
		vector<int>::iterator toIdIt = toId.begin();

		while (fromIdIt != fromId.end())
		{
			if (capacities[*toIdIt] < (bottles[*toIdIt] + bottles[*fromIdIt]) )
			{
				bottles[*toIdIt] = capacities[*toIdIt];
				bottles[*fromIdIt] = (bottles[*toIdIt] + bottles[*fromIdIt]) - capacities[*toIdIt];
			}
			else
			{
				bottles[*toIdIt] += bottles[*fromIdIt];
				bottles[*fromIdIt] = 0;
			}

			++fromIdIt;
			++toIdIt;
		}

		return bottles;
	}
};