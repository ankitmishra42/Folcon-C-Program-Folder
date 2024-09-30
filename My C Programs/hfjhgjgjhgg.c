#include<stdio.h>
int count(int);
int main()
{ 
	int num, d, n=0, rnum;
//	upp:
	rnum=0; 
	printf("Enter any integer number: ");
	scanf("%d",&num);
	while(num > 0)
	{	
		d = count(num);
		n = num%10;
		num = num/10;
		rnum = rnum + (n * d);
		
	}
   	printf("Reversed number: %d\n\n",rnum);
//	goto upp;
	return 0;
}
int count(int x)
{
	int b=1;
	while(x > 10)
	{
		x = x/10;
		b = b*10; 
	}
	return b;
}