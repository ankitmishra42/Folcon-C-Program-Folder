#include <stdio.h>
int main()
{
	int a, b=0;
	printf("enter the number ");
	scanf("%d",&a);
	while(a >= 1)
	{
		b = a%2;
		a = a/2;
		printf("%d",b);
	}
	return 0;
}f