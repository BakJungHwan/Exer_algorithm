#include <iostream>
#include <vector>
#include <string>

using namespace std;


void merge(vector<string>& arr, int start, int end, int mid)
{
    int len = end-start+1;
    vector<string> temp(len);
    
    int f_p = start;
    int b_p = mid+1;
    int t_p = 0;
    
    while(f_p <= mid && b_p <= end)
    {
        bool less = false;
        if(arr[f_p].size() < arr[b_p].size())
        {
            temp[t_p++] = arr[f_p++];
        }
        else if(arr[f_p].size() > arr[b_p].size())
        {
            temp[t_p++] = arr[b_p++];
        }
        else
        {  
        
        	cout << "same length!!" << endl;
            for(int i=0; i<arr[f_p].size();++i)
            {
            	cout << "arr[f_p][" << i << "] : " << arr[f_p][i] << "    arr[b_p][" << i << "] : " << arr[b_p][i] << "result : f_p < b_p" << (arr[f_p][i] < arr[b_p][i]) << endl;
                if(arr[f_p][i] < arr[b_p][i])
                {
                    temp[t_p++] = arr[f_p++];
                    less = true;
                    break;
                }
                else if(arr[f_p][i] > arr[b_p][i])
                {
                	temp[t_p++] = arr[b_p++];
                	less = true;
                	break;
				}
            }
            if(!less)
            {
            	temp[t_p++] = arr[b_p++];
			}
        }
    }
    
    if(f_p > mid)
    {
        while(b_p <= end)
        {
            temp[t_p++] = arr[b_p++];
        }
    }
    else
    {
        while(f_p <= mid)
        {
            temp[t_p++] = arr[f_p++];
        }
    }
    
    //cout << "arr" << endl;
    for(int i=start; i<=end; ++i)
    {
        arr[i] = temp[i-start];
//        cout << arr[i] << " ";
    }
  //  cout << endl;
}


void mergeSort(vector<string>& arr, int start, int end)
{
    if(start >= end)
    {
        return;
    }
    
    int mid = (start+end)/2;
    
    mergeSort(arr,start, mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end, mid);
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
        
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    
    mergeSort(unsorted, 0, n-1);
    
    
    cout << endl << endl;
    for(int i=0; i<unsorted.size();++i)
    {
        cout << unsorted[i] << endl;
    }
    
    
    
    return 0;
}

