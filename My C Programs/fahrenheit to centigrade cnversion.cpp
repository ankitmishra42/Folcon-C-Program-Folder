#include <stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature into fahenheit = ");
	scanf("%f",&f);
	c = ((f-32)*5)/9;
	printf(" Centigrade = %f\n",c);
	return 0;
}