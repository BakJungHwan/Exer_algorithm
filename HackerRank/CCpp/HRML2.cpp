#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>


using namespace std;

vector <string> tokenizeCode(string str)
{
	stringstream ss(str);
	vector <string> ret;
	
	while(1)
	{
		string input = "\n"; 
		ss >> input;
		if(input != "\n")
		{
			ret.push_back(input);
		}
		else
		{
			break;
		}
	}
	return ret;
}

pair< vector<string>, string> tokenizeQuery(string str)
{	
	pair< vector<string>, string> ret;
	vector <string> tag;
	string attr="";
	string temp="";	
	int attrIndex=-1;
	
	for(int i=0; i<str.size(); ++i)
	{		
		if(str[i] == '.')
		{
			tag.push_back(temp);
			temp = "";
			continue;
		}
		else if(str[i] == '~')
		{
			tag.push_back(temp);
			attrIndex = i;
			break;
		}
		temp+=str[i];
	}
	
	if(attrIndex != -1)
	{
		for(int i=attrIndex+1; i<str.size();++i)
		{
			attr+=str[i];
		}	
	}
	
	ret.first = tag;
	ret.second = attr;
	
	return ret;
}

string queryHRML(vector< vector<string> >& code, pair< vector <string>, string > &query)
{
	int currentTag=0;
	bool found;

	for(int i=0; i<query.first.size(); ++i)
	{
		
		while(1)
		{
			found = false;
			if( ('<'+query.first[i]) == code[currentTag][0])
			{
				found = true;
				break;
			}
			
			if( ("</" + query.first[i]+'>') == code[currentTag][0])
			{
				break;
			}
			
			if( i!=0 && ( "</"+query.first[i-1]+ '>') == code[currentTag][0])
			{
				break;
			}
			
			++currentTag;
		}
		
		if(!found)
		{
			return "Not Found!";
		}

	}
		
	
	for(int i=1; i<code[currentTag].size();++i)
	{
		if( i<=code[currentTag].size()-3 && (query.second == code[currentTag][i]) && (code[currentTag][i+1] == "=") )
		{
			string temp = code[currentTag][i+2];
			
			int start=0;
												
			while(temp[start++]!='\"');
						
			int end=start;
						
			while(temp[++end]!='\"');
			
			string ret = temp.substr(start, end-start);
			return ret;
		}
	}
	return "Not Found!";
}

int main() {
    int n;
    int q;
    
    cin >> n >> q;
    
    string input;
    vector< vector<string> > code(n);
	while(getchar()!='\n');
    
    for(int i=0; i<n; ++i)
    {
    	getline(cin,input);
    	code[i] = tokenizeCode(input);
	}
   
    vector< pair< vector<string>, string > > query(q);
        
    for(int i=0; i<q; ++i)
    {
    	getline(cin,input);
    	query[i] = tokenizeQuery(input);
    	cout << queryHRML(code, query[i]) << endl;
	}
        
    return 0;
}

