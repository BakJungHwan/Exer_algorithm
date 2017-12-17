#include <stdio.h>

int sequentialSearch(int dataArr[], int length, int findData)
{
	for (int i = 0; i < length; i++)
	{
		if (dataArr[i] == findData) return i;
	}
	
	return -1;
}

int main()
{
	int arr[] = { 23, 25,14,5,66,72,13,224,51 };
	int length = sizeof arr / sizeof arr[0];
	int findData = 0;
	int findIndex = 0;

	while (true)
	{
		printf("Which data are you finding now? : ");
		scanf("%d", &findData);

		findIndex = sequentialSearch(arr, length, findData);
		if (findIndex == -1) printf("I can't find the data you want to find\n");
		else printf("There is the data in %dth of array", findIndex);
	}

	return 0;
}