#include <stdio.h>
#include "myfile.c"
int main()
{
	int a, b;
	{out:
		printf("\n\nenter the value of a and b:\n");
		scanf("%d%d",&a,&b);
		double multi = nain(a,b);
		printf("\n Multiplication = %0.3lf",multi);
	}goto out;
	return 0;
} 