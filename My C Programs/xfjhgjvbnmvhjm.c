#include <stdio.h>
int main()
{
	FILE *fp;
	char str[200];
	fp = fopen("New text document .TXT","a");
	puts("enter the string : ");
	gets(str);
	fputs(str, fp); fputs("\n",fp);
	fclose(fp);	
	
	printf("new output\n");
	fp = fopen("New text document .TXT","r");
	fgets(str,200,fp);
   	printf("%s",str);
	fclose(fp);
	return 0;
}