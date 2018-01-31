#include <iostream>
#include <vector>

using namespace::std;

int areaMap[1000][1000];

int solution(vector<vector<int> > map)
{
	
}



int main()
{
	int tempArr[][2] =	{{1,1},{0,1}};
	int arr[2] = {1,2};
//	vector<vector<int> > map(tempArr,tempArr + sizeof(tempArr)/sizeof(tempArr[0]));

	vector<int> tempMap(arr, arr + sizeof(arr)/sizeof(arr[0]));
	
	for(int x : tempMap)
	{
		cout << x << endl;
	}
	
	
	return 0;
	
}
