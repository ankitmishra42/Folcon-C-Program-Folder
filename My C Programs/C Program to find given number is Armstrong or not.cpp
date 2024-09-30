// C Program to find given number is Armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
	int n, a, p=0, r;
	printf(" Enter the number\n");
	scanf("%d",&n); r=n;
	while(n>=1)
	{
		a = n%10;
		n = n/10;
		a = pow(a,3);
		p += a;
		printf(" Digit = %d\n",a);
	}
	printf(" Sum of digits = %d\n",p);
	if (p==r)
		printf("Its a armstrong number\n");
	else
		printf("Its not a armstrong number\n");
	return 0;
}