#include <iostream>
#include <string>

using namespace::std;

int cache[101][101];
string W;
string S;


int match(int w, int s)
{
	int& ret = cache[w][s];
	if (ret != -1)
	{
		return ret;
	}

	if (w < W.size() && s < S.size() && (W[w] == '?' || W[w] == S[s]))
	{
		return ret = match(w + 1, s + 1);
	}

	if (w == W.size())
	{
		return ret = (s == S.size());
	}

	if (W[w] == '*')
	{
		if (match(w + 1, s) || (s < S.size() && match(w, s+1)))
			{
				return ret = 1;
			}
	}
	return ret = 0;
}


int main(int argc, string argv[])
{
	int T;
	cin >> T;

	for (int i_T = 0; i_T < T; ++i_T)
	{
		int n;
		cin >> W;
		cin >> n;
		
		for (int i_n = 0; i_n < n; ++i_n)
		{
			cin >> S;
			memset(cache, -1, sizeof(cache));
			if (match(0, 0))
			{
				cout << S << endl;
			}
		}
	}
}