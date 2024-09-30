#include<stdio.h>
#define MAX 10
int a[MAX];
int top = -1;
void push(int x)
{
	if (top >= MAX-1)
	{
		printf("Stack is Full \n");
	}
	else
	{
		a[++top] = x;
	}
}
int pop()
{
	if (top <= -1)
	{
		printf("Stack is empty \n");
	}
	else
	{
		
	}
}