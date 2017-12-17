#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	vector<int> a(n);
	vector<int> s1(n,1);
	
	int ret1=0;
	
	for(int i=0; i<n; ++i)
	{
		cin >> a[i];
	}
	
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<i; ++j)
		{
			if(s1[j] % 2 == 1)
			{
				if((a[i] < a[j]) && (s1[i] < s1[j] + 1))
				{
					s1[i] = s1[j]+1;
				}
			}
			else
			{
				if((a[i] > a[j]) && (s1[i] < s1[j] + 1))
				{
					s1[i] = s1[j]+1;
				}
			}
		}
		if(ret1 < s1[i])
		{
			cout << "s1[" << i << "] : " << s1[i]  << endl;
			ret1 = s1[i];
		}
	}
	
	
	int ret2=0;
	vector<int> s2(n,1);
	
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<i; ++j)
		{
			if(s2[j] % 2 == 1)
			{
				if((a[i] > a[j]) && (s2[i] < s2[j] + 1))
				{
					s2[i] = s2[j]+1;
				}
			}
			else
			{
				if((a[i] < a[j]) && (s2[i] < s2[j] + 1))
				{
					s2[i] = s2[j]+1;
				}
			}
		}
		if(ret2 < s2[i])
		{
			cout << "s2[" << i << "] : " << s2[i]  << endl;
			ret2 = s2[i];
		}
	}
	
	int ret;
	
	if(ret1 > ret2)
	{
		ret = ret1;
	}
	else
	{
		ret = ret2;
	}
	
	
	cout << ret;
	
	return 0;
}
