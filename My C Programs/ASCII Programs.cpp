#include <stdio.h>
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(a>=48 && a<=57)
		printf("Given value is an Digit\n ");
	if(a>=65 && a<=90)
		printf("Given value is an uppercase alphabat\n ");
	if(a>=97 && a<=122)
		printf("Given value is an lowercase alphabat\n ");
	if((a>=0 && a<48)||(a>57 && a<65)||(a>90 && a<97)|| (a>122 && a<128))
	   	printf("Given value is a special symbols\n ");
	return 0;
}