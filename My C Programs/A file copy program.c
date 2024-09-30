#include <stdio.h>
#include <stdlib.h>
int main()//APR1.C
{
	FILE *fs, *ft;
	char ch;
	fs = fopen("array 1 program.c","r");
	if(fs == NULL)
	{
		puts("cannot open source file:");
		fclose(fs); exit(1);
	}
	ft = fopen("New folder .TXT","w");
	if(ft == NULL)
	{
		puts("cannot open target file:");
		fclose(ft); exit(2);
	}
	while(1)
	{
		ch = fgetc(fs);
		if(ch == EOF)
			break;
		fputc(ch, ft);
	}
	fclose(fs); fclose(ft);
	
	//for printing copied content
		ft = fopen("New folder .TXT","r");
	while(1)
	{
		ch = fgetc(ft);
		if(ch == EOF)
			break;
		printf("%c",ch);
	}fclose(ft);
	return 0;
}