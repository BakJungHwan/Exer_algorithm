#include <iostream>

using namespace std;

int main()
{
	int map[5][6] = { 0 };

	map[0][0] = 1;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (i != 0) map[i][j] += map[i - 1][j];
			if (j != 0) map[i][j] += map[i][j - 1];
		}
	}
	
	cout << map[4][5] << endl;
	

}