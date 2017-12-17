#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class IceCream {

public:
	int flavor;
	int index;

	IceCream(int _flavor, int _index) : flavor(_flavor), index(_index)
	{

	}
};

int binarySearch(int first, int last, vector<IceCream> arr, int search) {
	int f_t = first;
	int l_t = last;
	int m_t;

	while (f_t<=l_t)
	{
		m_t = (f_t + l_t) / 2;
		if (arr[m_t].flavor > search)
		{
			l_t = m_t - 1;
		}
		else if (arr[m_t].flavor < search)
		{
			f_t = m_t + 1;
		}
		else
		{
			return arr[m_t].index;
		}
	}
	return -1;
}

bool compare(const IceCream a, const IceCream b)
{
	return (a.flavor < b.flavor);
}

int main() {
	int t;
	int n, m;
	cin >> t;
	for (int test = 0; test < t; test++) {
		cin >> m >> n;
		vector<IceCream> arr;
		arr.reserve(n);

		for (int i = 0; i < n; i++) {
			int cost;
			cin >> cost;
			arr.push_back(IceCream(cost, i + 1));
		}
		
				
		sort(arr.begin(), arr.end(), compare);

				
		int firstIndex = 100000, secondIndex = 100000;
		for (int i = 0; i < n - 1; i++) {
			int search = m - arr[i].flavor;
			if (search >= arr[i].flavor) {
				int index = binarySearch(i + 1, n - 1, arr, search);
				if (index != -1) {
					cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
					break;

				}
			}
		}

	}

}
