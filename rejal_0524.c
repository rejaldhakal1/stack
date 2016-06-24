//Write a program to implement stack which should be able to check the condition of underflow and overflow.

# include <stdio.h>
# define size 5

struct stack
{
	int items[size];
	int top;
}s;

int main()
{
	int choice, element;
	s.top = 0;
	retry:
	printf("\n\n1. Enter element in Stack.\n2. Pull element from Stack.\n3. Exit\n");
	printf("\n\nEnter your choice : ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			if (s.top == 5)
			{
				printf("\n\nError Overflow\n\n");
			}
			else
			{
				printf("\n\nEnter the element to enter : ");
				scanf("%d", &element);
				push(element);
			}
			break;
		case 2:
			if (s.top == 0)
			{
				printf("\n\nError Underflow\n\n");
			}
			else
			{
				element=pop();
				printf("\n\nElement pulled from Stack : %d\n\n", element);
			}
			break;
		case 3:
			printf("\n\nThank You!!!");
			goto exit;
			break;
		default:
			printf("\n\nError. Try Again\n\n");
			break;
	}
	goto retry;
	exit:
	return 0;
}

int push(int value) 
{
   s.items[s.top] = value;
   s.top++;
   return 0;
}
 
int pop() 
{
   s.top--;
   return s.items[s.top];
}   
