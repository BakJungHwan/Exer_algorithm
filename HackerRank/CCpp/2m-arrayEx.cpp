#include <iostream>

using namespace::std;

void print2(int* (*map), int n)
{
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
	int map[2][2] = {{2,3}, {3,4}};
	
	print2(map,2);
	
	return 0;
	
}
