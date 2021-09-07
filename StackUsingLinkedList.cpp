#include<stdio.h>
#include<stdlib.h>
	struct stack
	{
		int data;
		struct stack *next;
	};
	struct stack *top=NULL,*curr;
	void push(int);
	void pop();
	void display();
		 int main()
		 {
		 	int choice,n;
		 	printf("Stack Using Linked list:");
		 	while(1)
			 {
			 	printf("\n***MENU***");
			 	printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT");
			 	printf("Enter your Choice");
		 		scanf("%d",choice);
		 		switch(choice)
		 		{
		 			case 1: printf("Enter Number:");
		 					scanf("%d",n);
		 					push(n);
		 					break;
		 			case 2: pop();
		 					break;
		 			case 3: display();
		 					break;
		 			case 4: exit(0);
		 			default: printf("You entered wrong Choice:");
				 }
			 }
		 }
		 void push(int n)
		 {
		 	curr=(struct stack*)malloc(sizeof(struct stack));
		 	if(curr==NULL)
		 	{
		 		printf("Overflow !");
		 		return;
			 }
			 curr->data=n;
			 curr->next=NULL;
			 	if(top==NULL)
			 		top=curr;
			 	else
			 	{
			 		curr->next=top;
			 		top=curr;
				 }
		 }
		 void pop()
		 {
		 	if(top==NULL)
		 	{
		 		printf("Stack  is Empty");
			 }
			 else
			 {
			 	struct stack *temp=top;
			 	printf("Deleted Element: %d",temp->data);
			 	top=temp->next;
			 	free(temp);
			  }
		 }
		 void display()
		 {
		 	if(top==NULL)
				printf("Stack is Empty:");
			else
			{
				struct stack *m;
				while(m!=NULL)
				{
					printf("%d",m->data);
					m=m->next;
				}
			}
		 }
	
