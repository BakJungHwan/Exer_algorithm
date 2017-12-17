#include <iostream>
#include <string>

using namespace::std;

class ThePalindrome
{
public :
	int find(string s)
	{
		bool isP = false;
		int ret;
		
		for(int i=s.size();; ++i)
		{
			for(int j=0; j<i; ++j)
			{
				if(i-1-j > s.size()-1)
				{
					continue;
				}
				
				if(j >= i-1-j)
				{
					isP = true;
					break;
				}
				
				if(s[j]!=s[i-1-j])
				{
					break;
				}
				
			}
			if(isP)
			{
				ret = i;
				break;
			}
		}
		return ret;
	}
};

int main()
{
	ThePalindrome ex;
	
	string input;
	
	cin >> input;
	
	cout << ex.find(input) << endl;
	
}
