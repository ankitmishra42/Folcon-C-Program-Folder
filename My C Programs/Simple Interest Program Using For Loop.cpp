//Simple Interest Program Using For Loop
#include<stdio.h>
int main()
{
	int p,n,a;
	float r,si;
	for(a=0;a<=3;a+=1)
	{
		printf(" \nEnter the value of p, n, r ");
		scanf("%d%d%f",&p,&n,&r);
		si = p*r*n/100;
		printf(" Simple Interst = %f\n",si);
	}
	return 0;
}