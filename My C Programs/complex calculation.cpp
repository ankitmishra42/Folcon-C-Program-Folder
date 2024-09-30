#include <stdio.h> 
int main()
{
	float l, b, r, pi=3.14;
	printf("Enter length and breadth rectangle, and radius of Circle\n ");
	scanf("%f%f%f",&l,&b,&r);
	printf(" Area of the rectangle = %.3f\n",l*b);
	printf(" Perimeter of the rectangle = %.2f\n",2*(l+b));
	printf(" Area of circle = %.3f\n",pi*r*r);
	printf(" Circumference = %.3f\n",2*pi*r);
	return 0;
}