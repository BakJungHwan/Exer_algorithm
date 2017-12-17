#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

typedef struct SCORE{
	string name;
	int g;
	int s;
	int b;
}Score;

bool gsort(const Score& a, const Score& b)
{
	return a.g > b.g;
}

bool ssort(const Score& a, const Score& b)
{
	return a.s > b.s;
}

bool bsort(const Score& a, const Score& b)
{
	return a.b > b.b;
}

bool nsort(const Score& a, const Score& b)
{
	return a.name < b.name;
}

class MedalTable
{
	void sortInS(vector< Score >& score)
	{
		for(int i=0; i<score.size()-1; ++i)	
		{
			int set=score[i].g;
			int count=0;
			for(int j=i+1; j<score.size();++j)
			{
				if(set==score[j].g)
				{
					++count;
				}
				else
				{
					break;
				}
			}
			if(count!=0)
			{
				sort(score.begin()+i,score.begin()+i+count+1,ssort);
				i+=count;
			}
		}
	}
	
	void sortInB(vector< Score >& score)
	{
		for(int i=0; i<score.size()-1; ++i)	
		{
			int setG=score[i].g;
			int setS=score[i].s;
			int count=0;
			for(int j=i+1; j<score.size();++j)
			{
				if(setG==score[j].g && setS==score[j].s)
				{
					++count;
				}
				else
				{
					break;
				}
			}
			if(count!=0)
			{
				sort(score.begin()+i,score.begin()+i+count+1,bsort);
				i+=count;
			}
		}
	}
	
	void sortInN(vector< Score >& score)
	{
		for(int i=0; i<score.size()-1; ++i)	
		{
			int setG=score[i].g;
			int setS=score[i].s;
			int setB=score[i].b;
			int count=0;
			for(int j=i+1; j<score.size();++j)
			{
				if(setG==score[j].g && setS==score[j].s && setB==score[j].b)
				{
					++count;
				}
				else
				{
					break;
				}
			}
			if(count!=0)
			{
				sort(score.begin()+i,score.begin()+i+count+1,nsort);
				i+=count;
			}
		}
	}
	
	
	public :
	vector< string > generate(vector< string > str)	
	{
		vector < Score > score;
				
		for(int i=0; i<str.size(); ++i)
		{
			stringstream ss(str[i]);
			for(int j=0; j<3; ++j)
			{
				string temp;
				ss >> temp;
				bool check = false;
				for(int k=0; k<score.size(); ++k)
				{
					if(!temp.compare(score[k].name))
					{
						check = true;
						if(j == 0) score[k].g++;
						else if(j == 1) score[k].s++;
						else score[k].b++;
						break;
					}
				}
				if(!check)
				{
					Score tempScore;
					tempScore.name = temp;
					tempScore.g = 0;
					tempScore.s = 0;
					tempScore.b = 0;
					if(j == 0) tempScore.g++;
					else if(j == 1) tempScore.s++;
					else tempScore.b++;
					score.push_back(tempScore);
				}
			}
		}
		
		sort(score.begin(),score.end(),gsort);
		sortInS(score);
		sortInB(score);
		sortInN(score);
		
		vector <string> ret(score.size());
		
		for(int i=0; i<score.size();++i)
		{
			string temp="";
			temp+=score[i].name + ' ';
			temp+=(score[i].g+0x30);
			temp+=' ';
			temp+=(score[i].s+0x30);
			temp+=' ';
			temp+=(score[i].b+0x30);
			ret[i] = temp;
		}
		return ret;
	}
};


int main()
{	
	int len;
	cin >> len;
	vector < string > input(len);
	
	string inputStr;
	while(getchar()!='\n');
	for(int i=0; i<len; ++i)
	{
		getline(cin,inputStr);
		input[i] = inputStr;
	}
	
	MedalTable aa;
	vector <string> ret = aa.generate(input);
	
	for(int i=0; i<ret.size();++i)
	{
		cout << ret[i] << endl;
	}
	
	return 0;
}


