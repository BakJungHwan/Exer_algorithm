#include <iostream>
#include <stack>

using namespace::std;

class NoOrderOfOperations
{
    public:
    int evaluate(string expr)
    {
        stack<int> stExpr;
        int ret;
        
        for(int i=0;i<expr.size();++i)
        {
            if(expr[i] == '*')
            {
                int temp = stExpr.top();
                stExpr.pop();
                temp*=expr[++i]-0x30;
                stExpr.push(temp);
                continue;
            }
            
            if('0' <= expr[i] && expr[i] <= '9')
            {
            	stExpr.push(expr[i]-0x30);
            	continue;
			}
            stExpr.push(expr[i]);
        }
        
        ret = stExpr.top();
        stExpr.pop();

        while(stExpr.size()!=0)
        {
            int temp = stExpr.top();
            stExpr.pop();
            if(temp == '+')
            {
               temp = stExpr.top();
               stExpr.pop();
               ret += temp;
            }
            else if(temp=='-')
            {
               temp = stExpr.top();
               stExpr.pop();
               ret -= temp;
            }
        }
        return ret;
    }
};

int main()
{
	NoOrderOfOperations a;
	cout << a.evaluate("3+5*7") << endl;
	
	return 0;
}
