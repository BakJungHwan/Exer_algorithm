#include <cmath>
#include <cstdio>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>
#define forn(i,a,n) for(int i = a;i<n;i++)
using namespace std;

int ijs(vector<int> arr, int pi, int to_find, int n) {
	int l;
	forn(i, pi, n) {
		if (arr[i] <= to_find) {
			l = i;
		}
		else break;
	}
	return l;
}

int main() {
	int n, k, par = 1; cin >> n >> k;
	vector<int> arr(n);
	forn(i, 0, n) cin >> arr[i];
	sort(arr.begin(), arr.end());
	int mid = arr[0] + k; int indm, right, p = 0;
	forn(i, 0, n) {
		if (i == n - 1) {
			p++; break;
		}
		indm = ijs(arr, i, mid, n); i = indm; p++;
		right = ijs(arr, i, arr[i] + k, n);
		i = right + 1;
		mid = arr[i] + k; i--;
	}
	cout << p;
	return 0;
}