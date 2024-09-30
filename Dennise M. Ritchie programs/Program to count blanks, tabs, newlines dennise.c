//Program to count blanks, tabs, newlines
#include<stdio.h>
main()
{
	int c, tnb, tnt, tnnl, tnc;
	
	tnb = tnt = tnnl = tnc = 0;
	while((c = getchar()) != EOF)
	{
		
		tnc++;
		if(c == ' ')
			tnb++;
		else if(c == '\t')
			tnt++;
		else if(c == '\n')
			tnnl++;

	
		printf("Total no of char = %d\n",tnc);
		printf("		Total no of blanks = %d\n",tnb);
		printf("		Total no of tabs = %d\n",tnt);
		printf("		Total no of newline char = %d\n",tnnl);
		
	}

	return 0;
}