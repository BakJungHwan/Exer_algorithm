#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int q;
    char disposal;
    
    cin >> n >> q;
    
    vector<string> code(n);
    string query;
    
    while(getchar()!='\n');
    
    for(int i=0; i<n; ++i)
    {
        std::getline(std::cin,code[i]);
    }
        
    for(int i=0; i<q; ++i)
    {
        cin >> query;
        
        int indexLastD=0;
        int indexTilde=0;
                
        for(int j=0;j<query.size();++j)
        {
            if(query[j] == '.')
            {
                indexLastD = j;
            }else if(query[j] == '~')
            {
                indexTilde = j;
                break;
            }
        }
       if(indexLastD!=0)
       {
       	   ++indexLastD;
	   }
        
        string tag(query,indexLastD,indexTilde-indexLastD);
        string name(query,indexTilde+1,query.size()-indexTilde-1);
                
        for(int j=0; j<n; ++j)
        {
        	string temp = '<' + tag;
        	bool flag = true;
        	
        	for(int k=0; k<temp.size();++k)
        	{
        		if(code[j][k] != temp[k])
        		{
        			flag = false;
				}
			}
                        
            if(flag)
            {
                int found = code[j].find(name);
                
                if(found==string::npos)
                {
                    cout << "Not Found!" << endl;
                    break;
                }
				
                while(code[j][found]!='\"')
                {
                    ++found;
                }

				++found;

                while(code[j][found]!='\"')
                {
                    cout << code[j][found++];
                }
                cout << endl;
            }
        }
        
    }
   
    return 0;
}

