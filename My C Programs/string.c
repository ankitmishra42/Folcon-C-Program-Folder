#include <stdio.h>
int main()
{
	char ads[] = "Ankit mishra";
	printf("%s\n",ads);
	ads[0] = 'X';
	printf("%s",ads);
	return 0;
}