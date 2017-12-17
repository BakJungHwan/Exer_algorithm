#include <iostream>
#include <vector>

using namespace::std;

int main()
{
	vector<int> a;
	
	cout << 'a' << endl;
	
	a.push_back(7);
	
	a[3] = 7;
	
	cout << 'b' << endl;
	cout << a[2] << endl;
	
	if(a[3] == 7)
	{
		cout << 7 << endl;
	}
}
