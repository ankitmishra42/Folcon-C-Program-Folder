#include<stdio.h>

int main(int argc, char *argv[])
{
	
	int i;
    printf("Hello world\n");
    
    printf("%d ",argc);
    
    for(i=1; i<argc; i++)
  
  	  printf("%s%s",argv[1],(i < argc-1)? "	":" ");
  
	printf("\n");
		
    return 0;
}