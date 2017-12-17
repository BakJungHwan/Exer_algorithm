#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n=3;
    //cin >> n;
    char d;
    cin >> d;
    int x;
    int y;
    cin >> x >> y;
    
    vector< vector<int> > ret(n, vector<int>(n,{1,2,3}));
    
    
    for(int i=0; i<n; ++i)
    {
    	for(int j=0; j<n; ++j)
    	{
    		cout << ret[i][j] << " ";
		}
		cout << endl;
	}
    
    
    
    return 0;
}

