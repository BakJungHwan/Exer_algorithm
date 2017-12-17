#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class InterestingDigits
{
public:
	vector<int> digits(int base)
	{
		vector<int> ret;
		bool ok;


		for (int i = 2; i <= (base - 1) * 3; ++i)
		{
			ok = true;
			for (int j = 1; j*i < pow(base, 4); ++j)
			{
				int temp = ( i*j / pow(base, 2) ) + ( (i*j % (int)pow(base,2)) / base ) + i*j % base;
				if (temp % i != 0)
				{
					ok = false;
					break;
				}
			}
			if (ok)
			{
				ret.push_back(i);
			}
		}
		return ret;
	}
};

int main()
{
	InterestingDigits abc;
	int n;
	cin >> n;
	vector<int> ret = abc.digits(n);

	for (vector<int>::iterator it = ret.begin(); it != ret.end(); ++it)
	{
		cout << *it << endl;
	}

	return 0;
}