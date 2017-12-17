#include <iostream>
#include <vector>

using namespace std;


void swap(int &a, int&b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void heapify(vector<int>& a, int n)
{	
	int c_pos = 0;
	
	while((c_pos*2+2) < n && !(a[c_pos] > a[c_pos*2+1] && a[c_pos] > a[c_pos*2+2]))
		{
			if(a[c_pos*2+1] > a[c_pos*2+2])
			{
				swap(a[c_pos],a[c_pos*2+1]);
				c_pos = c_pos*2+1;
			}
			else
			{
				swap(a[c_pos],a[c_pos*2+2]);
				c_pos = c_pos*2+2;
			}
		}
	
	if(c_pos*2+1 < n)	
	{
		if(a[c_pos] < a[c_pos*2+1])
		{
			swap(a[c_pos], a[c_pos*2+1]);
		}
	}
}

double extractMedian(vector<int> a, int n)
{
	
	if(n==1)
	{
		return a[0];
	}
	
	if(n==2)
	{
		return (a[0]+a[1])/2.0;
	}
	
	
	for(int i=0; i<n/2; ++i)
	{
		swap(a[0], a[n-1-i]);
		heapify(a, n-1-i);
	}
	
	if(n&1 == 1)
	{
		return a[0];
	}
	else
	{
		return (a[0]+a[n/2])/2.0;
	}
	
}



int main(){
    int n;
    int temp;
    int c_pos;
    
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       if(a_i!=0)
       {
           c_pos = a_i;
           while(c_pos > 0 && a[c_pos] > a[(c_pos-1)/2])
           {
               temp = a[c_pos];
               a[c_pos] = a[(c_pos-1)/2];
               a[(c_pos-1)/2]=temp;
               
               c_pos = (c_pos-1)/2;
           }
       }
       
		printf("%.1lf\n",extractMedian(a,a_i+1));
    }
    return 0;
}

