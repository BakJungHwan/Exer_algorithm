#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<int> inputBigInteger()
{
	string a;
		
	cout << "Input num a : ";
	cin >> a;
	
	int a_len = a.size();
	
	vector<int> int_a(a_len+2,0);
	
	for(int i=0; i<a_len; ++i)
	{
		int_a[a_len-i-1] = a[i] - 0x30;
	}
	
	return int_a;
}

vector<int> carry(vector<int> a)
{
	for(int i=0; i<a.size(); ++i)
	{
		if(a[i]>=10)
		{
			a[i+1] += a[i] / 10;
			a[i] = a[i] % 10;
		}
	}
	
	return a;
}


vector<int> multiplyBigInteger(vector<int> a, vector<int> b)
{
	vector <int> result(a.size()+b.size(),0);
	
	if(a.size() < b.size())
	{
		return multiplyBigInteger(b, a);
	}
	
	for(int i=0; i<b.size();++i)
	{
		for(int j=0; j<b.size();++j)
		{
			result[i+j] += a[j] * b[i];
		}
	}
	
	return carry(result);
}




int main()
{
	vector<int> a = inputBigInteger();
	vector<int> b = inputBigInteger();
	
	vector<int> ret(multiplyBigInteger(a,b));
	
	bool num_start = false;
	for(int i=0; i<ret.size(); ++i)	
	{
		if(ret[ret.size()-i-1]!=0)
		{
			num_start = true;
		}
		if(num_start)
		{
			cout << ret[ret.size()-i-1];	
		}
	}
	cout << endl;
	
	return 0;
}
