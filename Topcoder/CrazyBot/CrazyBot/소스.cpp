#include <iostream>
#include <vector>

using namespace::std;

bool map[30][30];

class CrazyBot
{
public:
	double getProbability(int n, int east, int west, int south, int north)
	{
		double ea = east / 100.0;
		double we = west / 100.0;
		double so = south / 100.0;
		double no = north / 100.0;

		return tryBot(n, 15, 15, ea, we, so, no);
	}

	double tryBot(int n, int x, int y, double ea, double we, double so, double no)
	{
		if (n == 0)
		{
			return 1;
		}

		if (map[x][y])
		{
			return 0;
		}

		map[x][y] = true;

		double ret = ea*tryBot(n - 1, x + 1, y, ea, we, so, no) + we*tryBot(n - 1, x - 1, y, ea, we, so, no) + no*tryBot(n - 1, x, y + 1, ea, we, so, no) + so*tryBot(n - 1, x, y - 1, ea, we, so, no);

		map[x][y] = false;

		return ret;

	}

};