#include<stdio.h>
int main()
{
	int i,arr[]={12,4,5,1,9,13,11,19,54,34},t;
	for(i=0; i<=9; i + 2)
	{
		t = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = t;
	}
	for(i=0; i<=9; i++)
		printf("%d	",arr[i]);
	return 0;
}