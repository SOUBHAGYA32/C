//c programm to implement stack using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int);
void pop();
void display();
int stack[MAX],top=-1;
int main()
{
	int n,choice;
	while(1)
	{
		printf("\n\n***** MENU ******\n");
		printf("\n1.PUSH \n2.POP \n3.Display \n4.Exit");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
			switch(choice)
			{
				case 1: printf("Enter The value to be Inserted:");
						scanf("%d",&n);
						push(n);
						break;
				case 2: pop();
						break;
				case 3: display();
						break;
				case 4: exit(0);
				default: printf("You Entered A Wrong Choice:");
			}
	}
return 0;
}
	void push(int n)
	{
		if(top==MAX-1)
			printf("Stack is Full !!");
		else
		{
			top=top+1;
			stack[top]=n;
			printf("Insertion Success");
		}
	}
	void pop()
	{
		if(top==-1)
			printf("Stack is empty");
		else
		{
			printf("Deleted: %d",stack[top]);
			top=top-1;
		}
	}
	void display()
	{
		if(top==-1)
			printf("Stack is Empty");
		else
		{
			int i;
			printf("Stack Elements Are:");
			for(i=top;i>=0;i--)
				printf("%d",stack[i]);
		}
	}


