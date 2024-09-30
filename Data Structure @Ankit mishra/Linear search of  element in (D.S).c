#include <stdio.h>
int Linear_search(int *ptr, int size, int element)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(*ptr == element)
			return i;
		
		ptr++;
	}return -1;
}
int main()
{
	int arr[10] = {3,6,12,17,21,24,34,45,56,78}, size=0, element, output=0;
	
	sos:
	
	size = sizeof(arr)/sizeof(int);
	
	printf("Enter the element who's you want to search: ");
	scanf("%d",&element);

	output = Linear_search(&arr[0], size, element);
	
	if(output == -1)
		printf("%d is not found\n\n",element);
	else
		printf("%d is found at indux (%d)\n\n",element,output);
	goto sos;
	
	return 0;
}