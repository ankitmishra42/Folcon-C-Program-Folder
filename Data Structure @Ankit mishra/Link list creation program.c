#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node next;
}
int main()
{
	struct node *main;
	struct node *second;
	struct node *third;
	main = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
}