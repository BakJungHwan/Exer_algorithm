#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	
	freopen("input7.txt","r",stdin);
	
	/*
	FILE* input = fopen("input7.txt","r");
	if(input == NULL)
	{
		cout << "input7.txt is not open"<< endl;
		return -1;
	}
	*/
		
	FILE* output = fopen("output7.txt", "w");
	if(output == NULL)
	{
		cout << "output7.txt is not open" << endl;
		return -1;
	}
		
    int n;
    int q;
    int lastAnswer=0;
    
    cin >> n >> q;
    
    /*
    fscanf(input,"%d", &n);
    fscanf(input,"%d", &q);
    */
    
    vector< vector<int>* > seqList(n);
    for(int i=0; i<n; ++i)
    {
        seqList[i] = new vector<int>;
    }
    
    for(int i=0; i<q; ++i)
    {
        int type;
        int x;
        int y;
        
        
        cin >> type >> x >> y;
        //fscanf(input,"%d", &type);
        //fscanf(input,"%d", &x);
        //fscanf(input,"%d", &y);
        
                
        if(type == 1)
        {
            seqList[(x^lastAnswer)%n]->push_back(y);
        }
        else
        {
            lastAnswer = seqList[(x^lastAnswer)%n]->at(y % (seqList[(x^lastAnswer)%n]->size()));
            fprintf(output,"%d\n",lastAnswer);
        }
        
    }
    
    for(int i=0; i<n; ++i)
    {
        delete seqList[i];
    }
    
    //fclose(input);
    fclose(output);
    
    return 0;
}
