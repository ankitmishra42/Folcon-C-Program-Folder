#include <stdio.h>
int main()
{
	double i;
	int e=0,f=0,g=0;
	int a;
	do
	{
		printf("enter 121 for exicute or 12 for not exicute ");
		scanf("%d",&a);
		printf("enter any number ");
		scanf("%lf",&i);
		if(i>0)
			e++;
		else if(i==0)
			f++;
		else
			g++;
	}while(a == 'y');
	printf("zeros = %d\n+ve = %d\n-ve = %d",f,e,g);
	return 0;
}