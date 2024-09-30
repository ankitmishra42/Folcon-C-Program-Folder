//C Program for finding number of note in any rupees
#include<stdio.h>
int main()
{
	int a, notwenty, noten, nofive, noone, total_note;
	a = 587;
	notwenty = a / 20;
	a = a % 20;
	noten = a / 10;
	a = a % 10;
	nofive = a / 5;
	a = a % 5;
	noone = a;
	total_note = notwenty+noten+nofive+noone;
	printf("\n notwenty = %d\n noten = %d\n nofive = %d\n", notwenty, noten, nofive);
	printf(" noone = %d\n total_note = %d\n",a,total_note);
	return 0;
}
