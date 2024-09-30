#include <stdio.h>
int main()
{
	int dd, mm, yy;
	printf("Enter date in dd/yy/mm or dd-yy-mm formet:\n");
	scanf("%d%*c%d%*c%d",&dd,&mm,&yy);
	printf("The date is: %d/%d/%d",dd,mm,yy);
	return 0;
}