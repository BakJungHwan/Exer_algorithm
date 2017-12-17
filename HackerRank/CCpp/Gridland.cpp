#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int m;
    int n;
    int k;
    
    int row;
    int c1;
    int c2;
    
    unsigned long long sum_track=0;
    
    
    map<int,vector < vector <int> > > track;
    
    cin >> m >> n >> k;
    
    for(int i=0; i<k; ++i)
    {
        cin >> row >> c1 >> c2;
        vector<int> temp(2);
        temp[0] = c1;
        temp[1] = c2;
        
        if(track.count(row))
        {
            int j=0;
            while(j<track[row].size())
            {
            	//cout << "track[" << row << "][" << j << "] : " << track[row][j][0] << ", " << track[row][j][1] << endl;
            	//cout << "temp" << "[0] :" << temp[0] << "    temp[1] : " << temp[1] << endl;
            	
                if(track[row][j][0] == temp[0] && track[row][j][1] == temp[1])
                {
                    track[row][j][0] = 0;
                    track[row][j][1] = 0;
                }
                
                if(track[row][j][0] == 0 && track[row][j][1] == 0)
                {
                    ++j;
                    continue;
                }
                
                if(track[row][j][0] <= temp[0] && temp[0] <= track[row][j][1] && track[row][j][1] <= temp[1])
                {
                    temp[0]=track[row][j][0];
                    track[row][j][1] = temp[1];
                    j=0;
                    continue;
                }
                else if(temp[0] <= track[row][j][0] && track[row][j][0] <= temp[1] && temp[1] <= track[row][j][1])
                {
                    temp[1] = track[row][j][1];
                    track[row][j][0]=temp[0];
                    j=0;
                    continue;
                }
                else if(track[row][j][0] <= temp[0] && temp[1] <= track[row][j][1])
                {
                    temp[0] = track[row][j][0];
                    temp[1] = track[row][j][1];
                    j=0;
                    continue;
                }
                else if(temp[0] <= track[row][j][0] && track[row][j][1] <= temp[1])
                {
                    track[row][j][0] = temp[0];
                    track[row][j][1] = temp[1];
                    j=0;
                    continue;
                }
                ++j;
            }
            
            track[row].push_back(temp);
        }
        else
        {
            vector< vector < int > > temp1;
            temp1.push_back(temp);
            track[row] = temp1;
        }
    }
    
    
    for(map<int,vector < vector < int > > >::iterator it=track.begin(); it!=track.end(); ++it)
    {
    	//cout << "row : " << it->first << endl;
        for(int i=0; i<it->second.size(); ++i)
        {
        //	cout << it->second[i][0] << ", " << it->second[i][1] << "  ";
            if(it->second[i][0]!=0 && it->second[i][1]!=0)
            {
                sum_track += it->second[i][1] - it->second[i][0] + 1;
            }
        }
        //cout << endl << endl;
    }
    
    unsigned long long int ret = m;
    ret*=n;
    
    cout << ret - sum_track << endl;
    return 0;
}

