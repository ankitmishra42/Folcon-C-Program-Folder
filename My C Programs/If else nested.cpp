//if else nested 
#include<stdio.h>
int  main()
{
	float cp, sp, p, l;
	printf(" enter value of sp and cp ");
	scanf("%f%f", &cp, &sp);
	l = cp - sp;
	p = sp - cp;
	if(p > 0)
		printf(" profit = %f\t ", p);
	if(l > 0)
		printf("  loss = %f\t ", l);
	if(p = l = 0)
		printf(" no loss,no profit \n ");
	return 0;
}
