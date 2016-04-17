#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int capacity;
	size_t size ;
	int *data;
};
int Isfull(struct stack *);
int Isempty(size_t);
void display(struct stack *);
int peek(struct stack *);
void push(int,struct stack *);
int pop(struct stack *);
int main()
{
	struct stack a;
	int ch,item;
	a.size=-1;//top=-1,ch,item,a[max]={0};
	//a.data=(int *)malloc(sizeof(int)*max);
	printf("Enter the capacity of stack : ");
	a.data=(int *)malloc(sizeof(int)*a.capacity);
	scanf("%d",&(a.capacity));
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Top\n4.Size\n5.Isempty\n6.Isfull\n7.Display\n8.Quit\nEnter your choice :\n");
        	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element to be pushed :\n");
				scanf("%d",&item);
				push(item,&a);
				break;
			case 2:
				item=pop(&a);
				printf("Popped item is : %d\n",item);
				break;
			case 3:
				printf("Item at the top is : %d\n",peek(&a));
				break;
			case 4:
				printf("Size of array is : %lu\n",a.size+1);
				break;
			case 5:
				if(Isempty(a.size))
					printf("Stack is Empty\n");
				else
					printf("Stack is not empty\n");
				break;
			case 6:
				if(Isfull(&a))
					printf("Stack is full\n");
				else
					printf("Stack is not full\n");
				break;
			case 7:
				display(&a);
				break;
			case 8:
				exit(1);
			default:
				printf("Wrong Choice\n");
		}
	}
	return 0;
}
int Isfull(struct stack *a)
{
	if(a->size==a->capacity)
		return 1;
	else
		return 0;
}
int Isempty(size_t t)
{
	if(t==-1)
		return 1;
	else
		return 0;
}
void display(struct stack *a)
{
	int i;
	for(i=0;i<=a->size;i++)
		printf("%d->",a->data[i]);
	printf("\n");
}
int peek(struct stack *a)
{
	if(Isempty(a->size))
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return a->data[a->size];
}
void push(int item,struct stack *a)
{
	if(Isfull(a))
	{
		printf("Stack Overflow\n");
		exit(1);
	}
	(a->size)++;
	a->data[a->size]=item;
}
int pop(struct stack *a)//int a[],int *top)
{
	if(Isempty(a->size))
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	int i=a->data[a->size];
	(a->size)--;
	return i;
}
