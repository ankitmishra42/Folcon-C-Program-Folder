//Swapping
#include <stdio.h>
int main ()
{
	int a, b, t;
	printf(" Enter the value of a and b\n ");
	scanf("%d%d",&a,&b);  /* let a = x, b = y */
	t = a;
	a = b;
	b = t;
	printf("\n a = %d\n b = %d\n",a,b);  /* now a = y, b = x  */
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\n a = %d\n b = %d\n",a,b); /* now b = x, a = y */
	return 0;
}