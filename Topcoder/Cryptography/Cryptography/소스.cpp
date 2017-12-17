#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Cryptography
{
public :
	long long encrypt(vector <int> numbers)
	{
		vector<int>::iterator numbersIt = numbers.begin();

		long long product=1;

		for (; numbersIt != numbers.end(); ++numbersIt)
		{
			if (*numbersIt == 0)
			{
				continue;
			}
			product *= *numbersIt;
		}

		long long ret = product;

		for (numbersIt = numbers.begin(); numbersIt != numbers.end(); ++numbersIt)
		{
			if (*numbersIt == 0)
			{
				continue;
			}
			ret = max(ret, product / (*numbersIt)*(*numbersIt + 1));
		}
	}
};