#include <stdio.h>
int main()
{
	double i;
	int e=0,f=0,g=0;
	int ask = 121;
	while(ask == 'y')
	{
		printf("enter 121 or n for your exicution ");
		scanf("%d",&ask);
		printf("enter any number ");
		scanf("%lf",&i);
		if(i>0)
			e++;
		else if(i==0)
			f++;
		else
			g++;
	}
	printf("zeros = %d\n+ve = %d\n-ve = %d",f,e,g);
	return 0;
}