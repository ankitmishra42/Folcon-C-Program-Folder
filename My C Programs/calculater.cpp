#include <stdio.h>
int main()
{
	int i;
	float a,b;
	sos:
	printf(" Enter value of a after it enter (1 for +),(2 for -),(3 for x),(4 for /) and then enter value of b\n ");
	scanf("%f%d%f",&a,&i,&b);
	switch(i)
	{
	case 1: printf(" a + b = %.2f\n\n",a+b);
		break;
	case 2: printf(" a - b = %.2f\n\n",a-b);
		break;
	case 3: printf(" a x b = %.2f\n\n",a*b);
		break; 
	default: printf(" a/b = %.2f\n\n",a/b);
		break;
	}
	if(i<5)
	goto sos;
	return 0;
}