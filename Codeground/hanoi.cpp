#inlcude <iostream>
#include <vector>

vector< pair<int, int> > hanoiSeq(vector< pair<int, int> > seq, int n)
{
	if(n == 1)
	{
		return seq;
	}
	
	vector< pair<int, int> > next;
	
	for(int i=0; i<seq.size(); ++i)
	{
		if(seq[i].first == 2) seq[i].first = 3;
		if(seq[i].first == 3) seq[i].first = 2;
		if(seq[i].second == 2) seq[i].first = 3;
		if(seq[i].second == 3) seq[i].first = 2;
		
		next.push_back(seq[i]);
	}
	
	pari<int, int> base(1,3);
	next.push_back(base);
	
}
