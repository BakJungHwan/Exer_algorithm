#include <stdio.h>
#include <stdlib.h>

int pascalTriangle(int r, int c, int** arr)
{
	if (r == 1 || c == 1)
	{
		return 1;
	}else if(arr[r - 1][c - 1] != 0)
	{
		return arr[r - 1][c - 1];
	}
	else
	{
		return pascalTriangle(r, c - 1, arr) + pascalTriangle(r - 1, c, arr);
	}
}

int main()
{
	int r, c;
	int **arr;
	int i = 0;

	scanf("%d", &r);
	scanf("%d", &c);
	
	arr = (int **)calloc(r, sizeof(int*));
	for (i = 0; i < r; i++)
	{
		arr[i] = (int *)calloc(c, sizeof(int));
	}
	
	printf("%d\n",pascalTriangle(r, c, arr));

	for (i = 0; i < r; i++)
	{
		free(arr[i]);
	}

	free(arr);

	return 0;

}