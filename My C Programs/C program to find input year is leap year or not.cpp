//C program to find input year is leap year or not
#include<stdio.h>
int main()
{
	int n;
	printf(" enter year  ");
	scanf("%d", &n);
	if(n % 4 == 0)
		printf("\n leap year\n");
	else
		printf("\n not a leap year\n");
	return 0;
}
