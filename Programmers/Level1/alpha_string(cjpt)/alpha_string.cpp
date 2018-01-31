#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Alpha_string46
{
	private:
		char myChar;
	
	public:
		Alpha_string46(char c)
		{
			myChar = c;
		}
		
		void printMyChar()
		{
			cout << myChar << endl;
		}
		
		bool alpha_string46(string s)
		{
			for(int i=0; i<s.size(); i++)
			{
				if(!('0'<=s[i] && s[i]<='9'))
				{
					return false;
				}
			}
			return true;
		}
};




int main()
{
	Alpha_string46 as('A');
	Alpha_string46* asP = new Alpha_string46('A');
	printf("%x\n", &as);
	printf("%x\n",asP);
	return 0;
}
