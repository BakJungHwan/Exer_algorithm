#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
class knapsack
{
	const int LIMIT = 10;
	vector<int> weight = { 3,4,1,2,3 };
	vector<int> value = { 2,3,2,3,6 };
	int dp[6][11];
	int ret = 0;
	

	
public :
	
	knapsack()
	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 11; ++j)
			{
				dp[i][j] = -1;
			}
		}

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 11; ++j)
			{
				cout << dp[i][j];
			}
			cout << endl;
		}

	}

	int putStuff(int n, int w)
	{		
		
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j <= LIMIT; ++j)
			{
				if (j + weight[i] <= LIMIT)
				{
					dp[i + 1][j + weight[i]] = max(dp[i + 1][j + weight[i]], dp[i][j] + value[i]);
					ret = max(dp[i + 1][j + weight[i]], ret);
				}
			}
		}
		return ret;
	}


};

*/



int main()
{
	int ws[6] = { 3, 4, 1, 2, 3 };
	int ps[6] = { 2, 3, 2, 3, 6 };

	int maxw = 10;
	int dp[6][11] = { 0, };
	int ret = 0;
	int wlimit = 0;

	for (int i = 0; i < 5; ++i)
	{
		wlimit += ws[i];
		for (int j = 0; j + ws[i] <= maxw; ++j)
		{
			dp[i + 1][j + ws[i]] = max(dp[i][j + ws[i]], dp[i][j] + ps[i]);
			ret = max(ret, dp[i + 1][j + ws[i]]);
			
			if (j + ws[i]>= wlimit)
			{
				break;
			}
		}
	}

	cout << ret << endl;

	return 0;
}