#include <iostream>
#include <vector>
#include <string>

using namespace::std;

class BusinessTasks
{
	public :
	string getTask(vector<string> list, int n)
	{		
		int i=0;
		
		while(list.size()!=1)
		{
			i+=n-1;
			while(i>=list.size())
			{
				i-=list.size();
			}
			list.erase(list.begin()+i);
		}
		
		return list[0];
	}
};


int main()
{
	vector<string> input;
	int len;
	int n;
	
	cin >> len >> n;
	
	for(int i=0; i<len; ++i)
	{
		string temp;
		cin >> temp;
		input.push_back(temp);
	}
	
	BusinessTasks a;
	cout << a.getTask(input,n) << endl;
	
	return 0;
}
