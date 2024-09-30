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
		top++;
		a[top] = x;
	}
}
int pop()
{
	int n;
	if (top <= -1)
	{
		printf("Stack is empty 2\n");
		return 0;
	}
	else
	{
		n = a[top];
		top--;
		return n;
	}
}
void display()
{
	int i;
	if (top <= -1)
	{
		printf("Stack is empty \n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("  %d",a[i]);
		}
	}
}
int main()
{
	push(5);
	push(16);
	display();
int	p = pop();
	printf("\n%d is poped \n",p);
	display();
	return 0;
}
