//C Program to reverse the number
#include<stdio.h>
int main()
{
	int n, d4, d3, d2, d1;
	long int renum;
	printf(" Enter the value of  n ");
	scanf("%d", &n);
	d4 = n % 10;
	n = n / 10;
	d3 = n % 10;
	n = n / 10;
	d2 = n % 10;
	n = n / 10;
	d1 = n % 10;
	renum = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
	printf("%ld", renum);
	return 0;
}
