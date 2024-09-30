/* if else Program in C programming */
#include<stdio.h>
int main()
{
	int qty, dis;
	float rate, total;
	printf(" enter the value of qty and rate  ")	;
	scanf("%d%f", &qty, &rate);
	if(qty > 1000)
		dis = 10;
	else
		dis = 0;
	total = (qty * rate) - ( rate * qty * dis/100 );
	printf("%f", total);
	return 0;
}
