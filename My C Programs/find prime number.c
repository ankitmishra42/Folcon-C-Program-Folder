#include <stdio.h>
int main()
{
	int i,num;
	printf("enter number ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("not prime number");
			break;
		}
	}
	if(num==i)
		printf("prime number");
}