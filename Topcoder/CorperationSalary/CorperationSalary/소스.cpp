#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace::std;

int dp[50] = { 0 };

class CorporationSalary
{
public:
	long long totalSalary(vector <string> relations)
	{
		long long ret = 0;
		for (int i=0; i < relations.size() ;++i)
		{
			if (dp[i] != 0)
			{
				ret += dp[i];
				continue;
			}
			ret += recurSalary(relations, i);
		}
		return ret;
	}

	int recurSalary(vector<string> relations, int row)
	{
		if (isEndedEmployee(relations[row]))
		{
			return 1;
		}
		
		int ret = 0;

		for (int i=0; i<relations[row].length();++i)
		{
			if (relations[row][i] == 'Y')
			{
				ret += recurSalary(relations, i);
			}
		}

		int& ref = dp[row];

		return ref = ret;
	}

	bool isEndedEmployee(string relation)
	{
		for (string::iterator st_it = relation.begin(); st_it != relation.end(); ++st_it)
		{
			if (*st_it == 'Y')
			{
				return false;
			}
		}
		return true;
	}

};


int main()
{
	CorporationSalary abc;

	vector<string> input = { "NYNNYN", "NNNNNN", "NNNNNN", "NNYNNN", "NNNNNN", "NNNYYN" };

	cout << abc.totalSalary(input) << endl;
	
	return 0;
}