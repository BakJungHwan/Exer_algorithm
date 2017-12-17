#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector <int> tokenize1(string str)
{
	stringstream ss(str);
	vector<int> ret;
	int input;
	while(1)
	{
		int input = 0;
		ss >> input;
		if(input != 0)
		{
			ret.push_back(input);
		}
		else
		{
			break;
		}
	}
	return ret;
}

/*
int stoi(string str)
{
	cout <<" str : " << str << endl;
	int ret;
	for(int i=str.size()-1; i>=0; --i)
	{
		int temp = str[i]-0x30;
		for(int j=0; j<i; ++j)
		{
			temp*=10;
		}
		ret+=temp;
	}
	return ret;
}

vector<int> vectorStoi(vector<string> strVector)
{
	
	vector<int> ret;
	for(int i=0; i<strVector.size(); ++i)
	{
		ret.push_back(stoi(strVector[i]));
	}
	return ret;
}
*/

class TallPeople
{
	public:
		vector<int> getPeople(vector<string> people)
		{
			int first = -1;
			int second = 123456789;
						
			vector< vector<int> > heights(people.size());
			
			for(int i=0; i<people.size();++i)
			{	
				heights[i] = tokenize1(people[i]);
			}
												
			for(int i=0; i<heights.size();++i)
			{
				int temp = heights[i][0];
				for(int j=1; j<heights[i].size();++j)
				{
					if(temp > heights[i][j])
					{
						temp = heights[i][j];
					}
				}
				if(first < temp)
				{
					first = temp;
				}
			}	
			
			for(int i=0; i<heights[0].size();++i)
			{
				int temp = heights[0][i];
				for(int j=1; j<heights.size();++j)
				{
					if(temp < heights[j][i])
					{
						temp = heights[j][i];
					}
				}
				if(second > temp)
				{
					second = temp;
				}
			}
			
			vector<int> ret;
			ret.push_back(first);
			ret.push_back(second);
			
			return ret;
		}	
};


int main()
{
	vector<string> input;
	int len;
	
	cin >> len;
	
	while(getchar()!='\n');
	
	char temp[200];
	
	for(int i=0; i<len; ++i)
	{
		gets(temp);
		string temp2(temp);
		input.push_back(temp2);
	}
	
	TallPeople a;
	vector<int> ret = a.getPeople(input);
	
	
	for(int i=0; i<2; ++i)
	{
		cout << ret[i] << endl;
	}
	
	return 0;
}
