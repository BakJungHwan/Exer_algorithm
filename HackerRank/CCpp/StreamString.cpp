#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    char temp;
    stringstream ss(str);
    int input;
   
    vector<int> ret;
    
    while(1)
    {
    	temp = 0;
        ss >> input >> temp;
        cout << "input : " << input << endl;
        cout << "temp : " << temp << endl;
        ret.push_back(input);
        
		if(temp==0)
        {
            break;
        }
    }
    return ret;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

