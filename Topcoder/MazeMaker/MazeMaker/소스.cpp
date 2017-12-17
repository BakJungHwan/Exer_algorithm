#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace::std;

int howGetTo[50][50] = { 0 };

class MazeMaker
{
public:
	int longestPath(vector <string> maze, int startRow, int startCol, vector <int> moveRow, vector<int> moveCol)
	{
		vector<int> startPoint;
		startPoint.push_back(startRow);
		startPoint.push_back(startCol);
		startPoint.push_back(1);

		queue<vector<int>> T;
		T.push(startPoint);

		while (1)
		{
			vector<int> head = T.front();
			T.pop();

			int mx;
			int my;

			for (int i = 0; i < moveRow.size(); ++i)
			{
				mx = head[0] + moveRow[i];
				my = head[1] + moveCol[i];

				if (mx < 0 || mx >= maze.size() || my < 0 || my >= maze[0].size())
				{
					cout << 'a';
					continue;
				}

				if (maze[mx][my] == '.' && howGetTo[mx][my] == 0)
				{
					cout << 'b';
					vector<int> next = {};
					next.push_back(mx);
					next.push_back(my);
					next.push_back(head[2] + 1);
					T.push(next);
					howGetTo[mx][my] = head[2];
				}
			}

			if (T.empty())
			{
				break;
			}
		}

		int ret=-1;

		for (int i = 0; i < maze.size(); ++i)
		{
			for (int j = 0; j < maze[0].length(); ++j)
			{
				if (maze[i][j] == '.')
				{
					if (howGetTo[i][j] == 0)
					{
						return -1;
					}
					ret = max(ret, howGetTo[i][j]);
				}
			}
		}

		return ret;

	}
};

int main()
{
	MazeMaker abc;

	vector<string> maze = { ".......",
							"X.X.X..",
							"XXX...X",
							"....X..",
							"X....X.",
							"......."};
	int startRow = 5;
	int startCol = 0;
	vector<int> moveRow = { 1, 0, -1, 0, -2, 1};
	vector<int> moveCol = { 0, -1, 0, 1, 3, 0};
		
	cout << abc.longestPath(maze, startRow, startCol, moveRow, moveCol) << endl;

	for (int i = 0; i < 50; ++i)
	{
		for (int j = 0; j < 50; ++j)
		{
			cout << howGetTo[i][j] << ' ';
		}
		cout << endl;
	}

}