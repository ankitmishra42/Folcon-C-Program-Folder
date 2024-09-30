/*C Program to write all the odd number from 1 to n 
in file.*/
#include <stdio.h>
int main()
{
	FILE *fp;
	int n,i=1;
	fp = fopen(" demo file.cpp","w");
	printf(" enter any number from 1 to n: ");
	scanf("%d",&n);
	while(i <= n)
	{
		fprintf(fp,"%d\n",i);
		i += 2;
	}
	fclose(fp);
	puts("\n demo file.cpp's modification is completed");
	return 0;
}