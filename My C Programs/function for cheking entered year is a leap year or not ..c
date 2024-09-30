//Function
#include"stdio.h"
int leap();
int main ()
{
	int y ;
	printf("enter the year through the keyboard : ");
	scanf("%d",&y);
	leap(y);
	return 0;
}
int leap(int a)
{
	if(a % 4 == 0)
		printf("leap year :");
	else
		printf("Not a leap year :");
	return 0;
}