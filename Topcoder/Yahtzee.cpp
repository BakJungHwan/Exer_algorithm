#include <iostream>
#include <vector>

using namespace::std;

class YahtzeeScore
{
    public :
    int maxPoints(vector <int> toss)
    {
        int ret=0;
                
        for(int i=0; i<5; ++i)
        {
            int temp=0;
            for(int j=0; j<5; ++j)
            {
                if(toss[i] == toss[j])
                {
                    temp+=toss[j];
                }
            }
            if(ret < temp)
            {
                ret = temp;
            }
        }
        return ret;
    }
};
