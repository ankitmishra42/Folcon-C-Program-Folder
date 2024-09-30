//Calculate a person's gross salary
#include <stdio.h>
int main()
{
	float bs, da, hra, gs;
	printf("Enter the peson's Basic Salary ");
	scanf("%f", &bs);
	da = 0.4 * bs;
	hra = 0.2 * bs;
	gs = bs + da + hra;
	printf("Basic Salary of that person=%f\n", bs);
	printf("Dearness Allowance=%f\n", da);
	printf("House Rant Allowance=%f\n", hra);
	printf("Gross Salary=%f\n", gs);
	return 0;
}
