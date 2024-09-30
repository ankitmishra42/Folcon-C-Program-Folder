#include<stdio.h>
int main()
{
	int yr ;
	printf("Enter any year\n ");
	scanf("%d",&yr);
	if(yr%100==0)
	{
		if(yr%400)
	 		printf("leap year\n");
	    else
	    	printf("not leap year\n");
	}
	else
	{
		if(yr%4==0)
			printf("leap year\n");
		else
			printf("Not a leap year");
	}	
	return 0;
}