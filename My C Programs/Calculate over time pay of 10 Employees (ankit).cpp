//Calculate over time pay of 10 Employees
#include "stdio.h"
int main()
{
	int t,i=1;
	float otpay;
	while(i<=10)
	{
		printf("Enter the time	");
		scanf("%d",&t);
		if(t>=40)
			otpay=(t-40)*120;
		else
			otpay=0;
		printf("Overtime pay = %f\n\n",otpay);
		i+=1;
	}
	return 0;
}