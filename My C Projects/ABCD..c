#include<stdio.h>
#include<ctype.h>
int i;
void ToUpper(char *str)
{
	for(i=0; str[i] != '\0'; i++)
		str[i] = toupper(str[i]);
}

int main()
{
	char aa[7];
	t:
	printf("Enter Any Number: ");
	scanf("%s",aa);
	ToUpper(aa);
	printf(" %s\n",aa);
	goto t;
	return 0;
}

#include<stdio.h>
#include<ctype.h>
int main()
{
	int i = 0;
	for(; i<100; i++)
	{
		printf("%c = %d\n",i,i);
	}
	return 0;
}