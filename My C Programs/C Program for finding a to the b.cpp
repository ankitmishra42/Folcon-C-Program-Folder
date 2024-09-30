//c program for finding a to the b
#include<stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	printf(" enter the value of a and b	");
	scanf("%f%f", &b, &c);
	a = pow(b, c);
	printf("%f", a);
	return 0;
}
