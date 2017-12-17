#include <bits/stdc++.h>
#include <vector>


using namespace std;

void myRotation(vector< vector<int> >& map)
{
    int r_t;
    int n = map.size();
    
    vector< vector<int> > temp(n, vector<int>(n));
    
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            temp[j][n-1-i] = map[i][j];
        }
    }
    
    
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            map[i][j] = temp[i][j];
        }
    }
}



void snakePath(int r_t, int x, int y, vector< vector<int> >& map)
{
    int n = map.size();
    if(((x==0) && (y==0)) || ((x==n-1) && (y==0)))
    {
        for(int i=0; i<n; ++i)
        {
            map[x][y++] = i+1;
        }
        --y;
        int dir=1;
        
        if(x == 0)
        {
            x++;
        }
        else
        {
            x--;
            dir=-1;
        }
        
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n-1; ++j)
            {
                map[x][y] = n+1+(n-1)*i+j;
                x+=dir;
            }
            x-=dir;
            y--;
            dir*=-1;
        }
    }
    else
    {
        int dir = 1;
        if(x!=0) dir = -1;
        
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                map[x][y] = n*i+j+1;
                x+=dir;
            }
            x-=dir;
            y--;
            dir*=-1;
        }
    }
   
    for(int i=0; i<r_t; ++i)
    {
        myRotation(map);
    }
}




int main() {
    int n;
    cin >> n;
    char d;
    cin >> d;
    int x;
    int y;
    cin >> x >> y;
    
    int r_t;
    switch(d)
    {
    	case 'e' :
    		r_t=0;
    		break;
    	case 's' :
    		r_t=1;
    		if((x==0) && (y==n-1))
    		{
    			x = 0;
    			y = 0;
			}
			else if((x==n-1) && (y==n-1))
			{
				x=0;
				y=n-1;
			}
			else if((x==0) && (y==0))
			{
				x=n-1;
				y=0;
			}
			else if((x==n-1) && (y==0))
			{
				x= n-1;
				y=n-1;
			}
    		break;
    	case 'w' :
    		r_t=2;
    		if((x==0) && (y==n-1))
    		{
    			x= n-1;
    			y = 0;
			}
			else if((x==n-1) && (y==n-1))
			{
				x=0;
				y=0;
			}
			else if((x==0) && (y==0))
			{
				x=n-1;
				y=n-1;
			}
			else if((x==n-1) && (y==0))
			{
				x = 0;
				y = n-1;
			}
    		break;
    	case 'n' :
    		r_t=3;
    		if((x==0) && (y==n-1))
    		{
    			x = n-1;
    			y = n-1;
			}
			else if((x==n-1) && (y==n-1))
			{
				x = n-1;
				y = 0;
			}
			else if((x==0) && (y==0))
			{
				x = 0;
				y=n-1;
			}
			else if((x==n-1) && (y==0))
			{
				x=0;
				y=0;
			}
    		break;
	}
    
    vector< vector<int> > ret(n, vector<int>(n,0));
    
    snakePath(r_t, x, y, ret);
    
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout << ret[i][j] << ' ';
        }
        cout << endl;
    }
    
    
    return 0;
}

