#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare_less(const int& a, const int& b)
{
    return a < b;
}

bool compare_greater(const int& a, const int& b)
{
    return a > b;
}

int main(){
    int n;
    int input;
    int temp;
    
    double m = 0.0;
    
    cin >> n;
    vector<int> max_h, min_h;
    max_h.reserve(n);
    min_h.reserve(n);
    
    for(int a_i = 0;a_i < n;a_i++){
       cin >> input;
       
        if(m == 0.0 || input >= m)
        {
            min_h.push_back(input);
            push_heap(min_h.begin(),min_h.end(),compare_greater);
        }
        else
        {
            max_h.push_back(input);
            push_heap(max_h.begin(),max_h.end(),compare_less);
        }
        
        while(max_h.size() + 1 < min_h.size())
        {
            temp = min_h.front();
            pop_heap(min_h.begin(),min_h.end(),compare_greater);
            min_h.pop_back();
            max_h.push_back(temp);
            push_heap(max_h.begin(),max_h.end(),compare_less);
        }
        
        while(min_h.size() + 1 < max_h.size())
        {
            temp = max_h.front();
            pop_heap(max_h.begin(),max_h.end(),compare_less);
            max_h.pop_back();
            min_h.push_back(temp);
            push_heap(min_h.begin(),min_h.end(),compare_greater);
        }
        
        cout << "max_h" << endl;
        for(int i=0; i<max_h.size();++i)
        {
        	cout << max_h[i] << " ";
		}
		cout << endl;
		
		cout << "min_h" << endl;
        for(int i=0; i<min_h.size();++i)
        {
        	cout << min_h[i] << " ";
		}
		cout << endl;
        
        if(min_h.size() > max_h.size())
        {
            m = min_h.front();
        }
        else if(min_h.size() < max_h.size())
        {
            m = max_h.front();
        }
        else
        {
            m = (min_h.front()+max_h.front())/2.0;
        }
        
        printf("%.1lf\n", m);       
    }
    return 0;
}
