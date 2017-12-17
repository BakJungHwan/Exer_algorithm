#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace::std;

class FriendScore
{
	public :
	int highestScore(vector <string> friends)
	{
		int ret=0;
		
		for(int i=0; i<friends.size(); ++i)
		{
			bool isfriends[50];
			for(int j=0; j<friends.size(); ++j)
			{
				isfriends[j] = false;
			}
			
			for(int j=0; j<friends[i].size(); ++j)
			{
				if(friends[i][j]=='Y')
				{
					isfriends[j] = true;
					for(int k=0; k<friends[j].size(); ++k)
					{
						if(friends[j][k]=='Y')
						{
							isfriends[k] = true;
						}
					}
				}
			}
			
			int temp = 0;
			for(int j =0; j<friends.size(); ++j)
			{
				if(isfriends[j])
				{
					++temp;
				}
			}
			ret = max(ret, temp-1);
		}
		
		return ret;
	}
	
};


int main()
{
	FriendScore ex;
	
	int n;
	cin >> n;
	
	vector<string> friends(n);
	
	for(int i=0; i<n; ++i)
	{
		cin >> friends[i];
	}
	
	cout << ex.highestScore(friends) << endl;
	
	return 0;
}
