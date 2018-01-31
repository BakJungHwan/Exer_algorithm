#include <iostream>
#include <vector>

using namespace std;

int sumDigit(int num)
{
	int sum = 0;
	while(num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

bool isHarshad(int num)
{
	return num % sumDigit(num) == 0;
}

int main(int argc, char* argv[])
{
	cout << isHarshad(18);
	
	return 0;
}
