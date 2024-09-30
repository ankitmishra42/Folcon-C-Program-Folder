/*Find factorial value of any number*/
#include <stdio.h>
int main()
{
	int num, i, fact;
	printf("Enter the number");
	scanf("%d",&num);
	fact=i=1;
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorail = %d ",fact);
	return 0;
}