#include <stdio.h>

void drawStar(int l)
{
	if (l == 0) return;
	printf("*");
	drawStar(l - 1);
}

void lineStar(int l)
{
	if (l == 0) return;
	lineStar(l - 1);
	drawStar(l);
	printf("\n");
}

int main()
{
	int n;
	scanf("%d", &n);

	lineStar(n);
	return 0;
}