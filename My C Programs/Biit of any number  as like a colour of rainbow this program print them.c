// Biit of any number  as like a colour of rainbow this program print them
#include<stdio.h>
#define BV(x) (1<<x)
int main()
{
	unsigned char colour, i;
	int c;
	char *colours[] = {"Voilet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Red"};
	printf("Enter any number: ");
	scanf("%d",&c);
	colour = (unsigned char)c;
	printf("Colour represented are:\n");
	for(i=0; i<=6; i++)
	{
		if((colour & BV(i)) == BV(i))
			printf("%s\n",colours[i]);
	}
	return 0;
}