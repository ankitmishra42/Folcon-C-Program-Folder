//Temprecture Conversion program 2 reverse order
#include<stdio.h>
main()
{
	float tempc  = 300, tempf;
	
	while(tempc >= -60)
	{
	
		tempf = (tempc) * (9.0/5.0) + 32;
		
		printf("%6.2f C   =",tempc);
		printf("   %6.2f F\n",tempf);
		tempc -= 20;
	}
	return 0;
}