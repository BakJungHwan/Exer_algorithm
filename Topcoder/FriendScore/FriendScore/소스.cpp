#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace::std;

class FriendScore
{
public :
	int highestScore(vector<string> friends)
	{
		bool isFriend[50];
		int temp;
		int ret = (-123456789);

		for (int i = 0; i < friends.size(); ++i)
		{

			temp = 0;
			for (int l = 0; l < 50; ++l)
			{
				isFriend[l] = false;
			}
			
			for (int j = 0; j < friends[i].size(); ++j)
			{
				if (friends[i][j] == 'Y')
				{
					
					cout <<"i = " << i << "    j = " << j << endl;
					cout << "isFriend1 = " << isFriend[j] << endl;
					if (!isFriend[j])
					{
						++temp;
						isFriend[j] = true;
						cout << "temp1 : " << temp << endl;
					}
					for (int k = 0; k < friends[j].size(); ++k)
					{
						if (friends[j][k] == 'Y' && (k!=i))
						{
							if (!isFriend[k])
							{
								++temp;
								isFriend[k] = true;
								cout << "temp2 : " << temp << endl;
							}
						}
					}
				}
			}
			ret = max(ret, temp);
		}
		return ret;
	}
};

int main() {
	vector<string> friends = { "NNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNN", "NNNNNYNNNNNYNNN", "NNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "YNNYYNNNNYNNNNN"};
		
	FriendScore abc;

	cout << abc.highestScore(friends) << endl;

	return 0;
}