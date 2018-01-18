#include <stdio.h>

int main()
{
	//freopen("test.txt","r",stdin);
	
	int n;
	int i=0;
	char name[51];

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%s", name);
		printf("Hello, %s!\n",name);
	}
	
	return 0;
}
