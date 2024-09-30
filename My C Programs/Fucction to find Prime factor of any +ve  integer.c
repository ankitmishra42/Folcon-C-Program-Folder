//Function to find Prime factors of any +ve integer
#include"stdio.h"
void leap();
int main ()
{
	int y ;
	printf("Enter any +ve integer : ");
	scanf("%d",&y);
	printf("Prime factors = ");
	leap(y);
	printf("\n");
	return 0;
}
void leap(int a)
{
	int i = 2;
	while(i <= a)
	{	
		if(a%i == 0)
		{
			a = a/i;
			printf("%d,",i);
		}
		else
		{
			i++;
		}
	}
}