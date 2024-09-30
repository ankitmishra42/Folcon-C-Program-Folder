#include <stdio.h>
#include <math.h>
#define PI 3.14
#define area(r) (PI *r *r)
int main()
{
	int r, Area;
	printf("Enter Any Number ");
	scanf("%d",&r);
	Area = area(r);
	printf("\nArea = %d",Area);
	int SquareRoot = sqrt(r);
	double parimeter = 2*PI*r;
	printf("\nSquareRoot = %d",SquareRoot);
	printf("\nParimeter = %lf",parimeter);
	return 0;
}