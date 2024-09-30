#include <stdio.h>
int main()
{
	int i = 21, a, b, c;
	do
	{
		sos:
		printf("Enter the number between 1 to 4 of stics that you choose: ");
		scanf("%d",&a);
		if(a<1 || a>4)
		{
			printf("You have entered nvalid number\n");
			goto sos;
		}
    	b = 5-a;
    	printf("The number of stics chosed by computer: %d\n\n",b);
	   	c = a+b;
    	i = i-c;
	}while(i>=6);
	printf("Left only one stic\n");
	printf("You loss the game\n");
	return 0;
}