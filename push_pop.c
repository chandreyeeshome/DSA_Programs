#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int TOP;
	int size;
	int *arr;
} stack;
void init(stack *p,int size);
int isfull(stack *p);
int push(stack *p, int item);
int isempty(stack *p);
int pop(stack *p);
//void* pop(stack *p);
void display(stack *p);
int main()
{
	int item,ch;
	//char choice;
	stack s1;
	init (&s1,5);
	int popped;
	//void* popped;
	system("clear");
	//int flag;
	do//while(1)
	{
		//flag=1;
		printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. STOP\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
				printf("Enter the element: ");
		                scanf("%d",&item);
				if(push(&s1,item))
				printf("\nSTACK OVERFLOW\n");
				}
				break;
			case 2:
				{
				popped = pop(&s1);
				if(popped==1)//if(*(char*)popped=='#')//if(pop(&s1))
				printf("\nSTACK UNDERFLOW\n");
				else
				printf("\n%d is popped.\n",popped);//*(int*)popped);//pop(&s1));
				//printf("%d is popped.",item);
				}
				break;
			case 3:
				{
				display(&s1);
				//printf("Do You want to continue? (Y/N) ");
		                //scanf(" %c",&choice);
				//if(choice=='Y')
				//flag=0;
				}
				break;
			case 4:
				break;
			default:
				printf("Try Again!");
		}
		//printf("Do You want to continue? (Y/N)");
		//scanf(" %c",&choice);
	}while(ch!=4);//while(flag==0);//while(choice=='Y'|| ch!=4);
}
void init(stack *p,int size)
{
	p->TOP=-1;
	p->size=size;
	p->arr=(int *)malloc(5*sizeof(int));
}
int isfull(stack *p)
{
	return(p->TOP==p->size-1);
}
int push(stack *p, int item)
{
	if(isfull(p))
		return (1);
	else
	{
		p->arr[++p->TOP]=item;
		return 0;
	}
}
int isempty(stack *p)
{
	return(p->TOP==-1);
}
int pop(stack *p)
//void* pop(stack *p)

{
	//int value;
	//int pop;
	if (isempty(p))
	{
		/*static char a='#';
		return &a;*/
		return (1);
	}
	else
	{
		//static int value=p->arr[p->TOP--];
		//printf("\n%d",value);
		return p->arr[p->TOP--];
	}          
}
void display(stack *p)
{
	int i;
	printf("The Stack Elements are : ");
	for (i=p->TOP;i>=0;i--)
	{
		printf("\n%d",p->arr[i]);
	}
	printf("\n");
}

