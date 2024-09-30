/* if else Program in C programming */
#include<stdio.h>
int main()
{
	float bs, hra, da, gross;
	printf(" enter the value of bs  ");
	scanf("%f", &bs);
	if(bs < 1500)
	{
		hra = bs * 10/100;
		da = bs * 90/100;
   	}
	else
	{
		hra = 500;
		da = bs * 98/100;
	}
	gross = bs + hra + da;
	printf("%f", gross);
	return 0;
}
