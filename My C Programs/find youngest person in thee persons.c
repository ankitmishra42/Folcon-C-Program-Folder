//find youngest person in thee persons
#include <stdio.h>
int main()
{
	float age1, age2, age3;
	a:
	printf("\nenter ages: ");
	scanf("%f%f%f",&age1, &age2, &age3);
	if(age1 < age2 && age2 < age3)
		printf("person1 is youngest\n");
	else if(age2<age1 && age2<age3)
		printf("person2 is youngest\n");
	else if(age3<age1 && age3<age1)
		printf("person3 is youngest\n");
	else
		printf("Same age of all three persons\n");
	goto a;
	return 0; 
}