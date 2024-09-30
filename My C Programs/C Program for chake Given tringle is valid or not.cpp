#include <stdio.h>
int main()
{
	float a, b, c, sum, largeside;
	printf("Enter three sides\n ");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b && a>c)
		{sum = b+c; largeside = a;}
	if(b>a && b>c)
		{sum = a+c; largeside = b;}
	if(c>a && c>b)
		{sum = a+b; largeside = c;}
	if(sum > largeside)
		printf("Given triangle is valid\n ");
	if(sum<=largeside)
		printf("Given triangle is NOT valid\n ");
	return 0;
}