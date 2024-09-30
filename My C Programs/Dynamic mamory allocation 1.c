#include <stdio.h>
//#include <stdlib.h>
int main()
{
	int *rp, i, n = 4;
	rp = (int*) malloc(n* sizeof(int));
	printf("Input values: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",rp);
		rp++;
	}
	printf("Output values: ");
	for(i=0; i<n; i++)
	{
		rp--;
		printf("%d\n",*rp);
	}
	return 0;
}