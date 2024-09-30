#include <stdio.h>
int Binary_search(int arr[], int size, int element);
int main()
{
	int arr[10] = {1,3,6,7,9,11,13,15,18,22}, size=0, element, output=0;
	sos:
	
	size = sizeof(arr)/sizeof(int) -1;
	printf("Enter the element who's you want to search: ");
	scanf("%d",&element);
	output = Binary_search(arr,size,element);
	
	if(output == -1)
		printf("%d is not found\n",element);
	else
		printf("%d is found at indux (%d)\n",element,output);
	goto sos;
	return 0;
}
int Binary_search(int arr[], int size, int element)
{
	int low, mid, high;
	high = arr[size];
	low = 0;
	while(low <= high)
	{
		mid = (low + high)/2;
		if(arr[mid] == element)
			return mid;
		else if(arr[mid] < element)
			low = mid;
		else
			high = mid;
	}
	return -1;
}