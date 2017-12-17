#include <stdio.h>


int h = 1;
int t;

void printstar(int *m)
{
	if (h == t)
	{
		printf("\n");
		if (h == *m)
		{
			return;
		}
		h++;
		t = 0;
		return printstar(m);
	}
	else
	{
		printf("*");
		t++;
		return printstar(m);
	}

}

int main()
{
	int m;
	scanf("%d", &m);
	printstar(&m);
	return 0;
}