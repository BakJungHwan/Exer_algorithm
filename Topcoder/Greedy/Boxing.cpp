#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bt(int s, vector<int> arr)
{
	for(int i=0; i<arr.size();++i)
	{
		if(s <= arr[i])
		{
			return arr[i];
		}
	}
	return 123456789;
}


class Boxing
{
	public :
	int maxCredit(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d, vector<int>& e)
	{
		vector<int> best(5);
		int ret=0;
		
		for(int s=0; s<180000; ++s)
		{
			best[0] = bt(s,a);
			best[1] = bt(s,b);
			best[2] = bt(s,c);
			best[3] = bt(s,d);
			best[4] = bt(s,e);
			
			sort(best.begin(),best.end());
						
			if(best[2]==123456789)
			{
				break;
			}
			
			if(best[2]<=s+1000)
			{
				ret++;
				s = best[2];
			}
		}
		
		return ret;
	}
};


int main()
{
	freopen("test.txt", "r", stdin);
	
	
	Boxing aa;
	int len[5];
	
	for(int i=0; i<5; ++i)
	{
		cin >> len[i];
	}
		
	vector<int> a;
	vector<int> b;
	vector<int> c;
	vector<int> d;
	vector<int> e;
	
	for(int i=0; i<len[0];++i)
	{
		int input;
		cin >> input;
		a.push_back(input);
	}
	
	for(int i=0; i<len[1];++i)
	{
		int input;
		cin >> input;
		b.push_back(input);
	}
	
	for(int i=0; i<len[2];++i)
	{
		int input;
		cin >> input;
		c.push_back(input);
	}
	
	for(int i=0; i<len[3];++i)
	{
		int input;
		cin >> input;
		d.push_back(input);
	}
	
	for(int i=0; i<len[4];++i)
	{
		int input;
		cin >> input;
		e.push_back(input);
	}

	cout << aa.maxCredit(a,b,c,d,e) << endl;
	
	return 0;
}
