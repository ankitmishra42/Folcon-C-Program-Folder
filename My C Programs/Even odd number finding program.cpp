//Even odd number finding program
#include<stdio.h>
int main()
{
	int a;
	printf(" enter the value of a  ");
	scanf("%d", &a);
	if(a % 2 == 0)

		printf("\n %d is an Even number\n", a);

	else

		printf("\n %d is an odd number\n", a);

	return 0;
}
