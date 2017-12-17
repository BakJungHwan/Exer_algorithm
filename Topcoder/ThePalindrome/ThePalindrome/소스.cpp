#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class ThePalindrome
{
public:
	int find(string s)
	{
		string temp;
		for (string::reverse_iterator reIt = s.rbegin(); reIt != s.rend(); ++reIt)
		{
			temp.push_back(*reIt);
		}

		for (int i = 0; i < s.size(); ++i)
		{
			if (temp.substr(0, temp.size() - i) == s.substr(i, s.size()))
			{
				return s.size() + i;
			}
		}
	}
};

int main()
{
	ThePalindrome abc;
	string s;
	cin >> s;
	cout << abc.find(s) << endl;

	return 0;
}