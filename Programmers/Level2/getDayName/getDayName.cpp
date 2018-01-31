#include<iostream>
#include<string>
using namespace std;

int months[] = {31,29,31,30,31,30,31,31,30,31,30,31};
string weekdays[] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};

string getDayName(int a,int b)
{
  int days = b;
  for(int i=0; i<a-1; ++i)
  {
    days+=months[i];
  }
  return weekdays[days%7];
}

int main()
{
	int a=5,b=24;

	//아래는 테스트 출력을 위한 코드입니다.
	cout<<getDayName(a,b);
}