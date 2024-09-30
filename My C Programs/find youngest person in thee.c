//find youngest person in thee persons
#include <stdio.h>
int main()
{
	int age1, age2, age3;
	a:
	printf("\nEnter the age of Ram, Shyam and Ajay: ");
	scanf("%d%d%d",&age1, &age2, &age3);
	if(age1 < age2 && age1 < age3)
		printf("Ram is youngest\n");
	else if(age2 < age1 && age2 < age3)
		printf("Shyam is youngest\n");
	else if(age3 < age1 && age3 < age2)
		printf("Ajay is youngest\n");
	else
		printf("All three persons are same age\n");
	goto a;
	return 0; 
}