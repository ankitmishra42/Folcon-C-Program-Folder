#include "stdio.h"
int main()
{
	int p,r,t,i=1;
	float sp;
	while(i<=4)
	{
		printf("enter the value of p,r & t ");
		scanf("%d%d%d",&p,&r,&t);
		sp=p*r*t/100;
		printf("\n%f\n",sp);
		i+=1;
	}
	return 0;
}