#include <iostream>
#include <vector>
#include <queue>

using namespace::std;

int main()
{
	int n;
	cin >> n;

	int ** ans;
	ans = new int*[n];
	for (int i = 0; i < n-1; ++i)
	{
		ans[i] = new int[n];
		for (int j = 0; j < n-1; ++j)
		{
			ans[i][j] = -1;
		}
	}

	int ** map;
	map = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		map[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			map[i][j] = -1;
		}
	}
		
	for (int dx = 1; dx < n; ++dx)
	{
		for (int dy = 1; dy < n; ++dy)
		{
			vector<int> dx_set = {};
			vector<int> dy_set = {};
			
			dx_set.push_back(dx);
			dx_set.push_back(dx);
			dx_set.push_back((-1)*dx);
			dx_set.push_back((-1)*dx);
			dx_set.push_back(dy);
			dx_set.push_back(dy);
			dx_set.push_back((-1)*dy);
			dx_set.push_back((-1)*dy);

			dy_set.push_back(dy);
			dy_set.push_back((-1)*dy);
			dy_set.push_back(dy);
			dy_set.push_back((-1)*dy);
			dy_set.push_back(dx);
			dy_set.push_back((-1)*dx);
			dy_set.push_back(dx);
			dy_set.push_back((-1)*dx);
						
			queue<int> xq;
			queue<int> yq;
			queue<int> nq;
			xq.push(0);
			yq.push(0);
			nq.push(0);

			int cx=0;
			int cy=0;
			bool outWhile = false;
			
			while (!xq.empty())
			{
				int x = xq.front();
				int y = yq.front();
				int n_t = nq.front();
				xq.pop();
				yq.pop();
				nq.pop();

				for (int i = 0; i < 8; ++i)
				{
					cx = x + dx_set[i];
					cy = y + dy_set[i];

					

					if (cx < 0 || cy < 0 || cx >= n || cy >= n)
					{
							continue;
					}
					
					if (cx == n - 1 && cy == n - 1)
					{
						ans[dx - 1][dy - 1] = n_t + 1;
						outWhile = true;
						break;
					}
										
					if (map[cx][cy] != -1)
					{
						continue;
					}
										
					map[cx][cy] = n_t+1;
					nq.push(n_t + 1);
					xq.push(cx);
					yq.push(cy);
				}
				if (outWhile)
				{
					break;
				}
			}

			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					map[i][j] = -1;
				}
			}

		}
	}

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] map[i];
	}
	delete[] map;

	return 0;
}