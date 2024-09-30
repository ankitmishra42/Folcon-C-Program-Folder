#include<stdio.h>
void enqueue(int x);
int dequeue();
void display();
#define MAX 10
int a[MAX];
int top = -1;
int main()
{
	enqueue(5);
	enqueue(6);
	enqueue(7);
	display();
	printf("\n%d is deleted \n",dequeue());
	display();
	return 0;
}
void enqueue(int x)
{
	if (top >= MAX-1)
	{
		printf("Queue is Full \n");
	}
	else
	{
		top++;
		a[top] = x;
	}
}
int dequeue()
{
	int n, i=0;
	if (top <= -1)
	{
		printf("Queue is empty 1\n");
		return 0;
	}
	else
	{
		n = a[i];
		for(; i<top; i++)
		{			
		   	a[i] = a[i+1];
		}
		top--;
		return n;
	}
}
void display()
{
	int i;
	if (top <= -1)
	{
		printf("Queue is empty \n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d  ",a[i]);
		}
	}
}