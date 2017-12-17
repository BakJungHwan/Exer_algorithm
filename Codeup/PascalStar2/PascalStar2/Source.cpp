#include <stdio.h>
#include <stdlib.h>

typedef long long int LLD;


int main()
{
	int r;
	int c;
	int i;
	int j;

	scanf("%d", &r);
	scanf("%d", &c);



	LLD **arr;

	arr = (LLD**)calloc(r, sizeof(LLD*));
	for (i = 0; i < r; i++)
	{
		arr[i] = (LLD*)calloc(c, sizeof(LLD));
	}

	for (i = 0; i < r; i++)
	{
		arr[i][0] = 1;
	}

	for (i = 0; i < c; i++)
	{
		arr[0][i] = 1;
	}

	for (i = 1; i < r; i++)
	{
		for (j = 1; j < c; j++)
		{
			arr[i][j] = arr[i - 1][j] % 100000000 + arr[i][j - 1] % 100000000;
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%6lld", arr[i][j]);
		}
		printf("\n");
	}


	printf("%lld\n", arr[r - 1][c - 1] % 100000000);
	


	for (i = 0; i < r; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}