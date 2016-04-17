#include<stdio.h>
#include<stdlib.h>
# define max 10000

int Isfull(int);
int Isempty(int);
void display(int [],int);
int peek(int [],int);
void push(int,int [],int *);
int pop(int [],int *);
int main()
{
	int top=-1,ch,item,a[max]={0};
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Top\n4.Size\n5.Isempty\n6.Isfull\n7.Display\n8.Quit\nEnter your choice :\n");
        	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element to be pushed :\n");
				scanf("%d",&item);
				push(item,a,&top);
				break;
			case 2:
				item=pop(a,&top);
				printf("Popped item is : %d\n",item);
				break;
			case 3:
				printf("Item at the top is : %d\n",peek(a,top));
				break;
			case 4:
				printf("Size of array is : %d\n",top);
				break;
			case 5:
				if(Isempty(top))
					printf("Stack is Empty\n");
				else
					printf("Stack is not empty\n");
				break;
			case 6:
				if(Isfull(top))
					printf("Stack is full\n");
				else
					printf("Stack is not full\n");
				break;
			case 7:
				display(a,top);
				break;
			case 8:
				exit(1);
			default:
				printf("Wrong Choice\n");
		}
	}
	return 0;
}
int Isfull(int top)
{
	if(top==max)
		return 1;
	else
		return 0;
}
int Isempty(int top)
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void display(int a[],int top)
{
	int i;
	//printf("\nTop=%d\n",top);
	for(i=0;i<=top;i++)
		printf("%d->",a[i]);
	printf("\n");
}
int peek(int a[],int top)
{
	if(Isempty(top))
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return a[top];
}
void push(int item,int a[],int *top)
{
	if(Isfull(*top))
	{
		printf("Stack Overflow\n");
		exit(1);
	}
	(*top)++;
	a[*top]=item;
}
int pop(int a[],int *top)
{
	if(Isempty(*top))
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	int i=a[*top];
	(*top)--;
	return i;
}
