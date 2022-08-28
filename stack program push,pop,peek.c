#include<stdio.h>
int stack[5],top=-1;
void push();
void pop();
void display();
void peek();
void main()
{

	int ch;
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.show\n");
	printf("4.peek");
	
	while(1)
	{
		printf("\n Enter choice number:");
		scanf("%d",&ch);
		
		switch(ch)
		{
	        case 1:push();
			 break;
		 case 2:pop();
		 	break;
	        case 3:display();
		 	break;
		 case 4:peek();
		        break;
			
			default:
			 printf("invalide opration");
			
		}
	}
}
void push()
{
	int item;
	if(top==5-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("push element in stack:");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
		
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
		
	}
	else
	{
		printf("popped:%d",stack[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top>=0)
	{
		printf("stack element:\n");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
	       }
	}
	else
	{
		printf("stack is empty");
	}
}

void peek()
{
	
	if(top==-1)
	{
		printf("stack is empty");
		
	}
	else
	{
		printf("\n PEEK THE TOP OF ELEMENT:%d",stack[top]);
	}
}

