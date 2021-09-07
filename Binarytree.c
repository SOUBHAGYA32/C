#include<stdio.h>
#include<stdlib.h>
	struct tree{
		struct tree *left;
		int data;
		struct tree *right;
	};
	struct stack{
		struct tree *t;
		struct stack *next;
	};
	struct tree *curr,*root,*pre;
	struct stack *top=NULL,*s;
int main()
{
	int f=1,no;
	char chl='y',chr='y';
	printf("Enter Data For Root Node:");
	scanf("%d",&no);
	root=(struct tree*)malloc(sizeof(struct tree));
	root->data=no;
	root->left=root->right=NULL;
	pre=root;
		while(f==1)
		{
			printf("Is %d has the left child?",npre->data);
			chl=tolower(getch());
			if(chl=='y')
			{
				printf("Enter Data:");
				scanf("%d",&no);
				curr=(struct tree*)malloc(sizeof(struct tree));
				curr->data=no;
				curr->left=curr->right=NULL;
				pre->left=curr;
			}
			if(chr=='y')
			{
				printf("Enter Data:");
				scanf("%d",&no);
				curr=(struct tree*)malloc(sizeof(struct tree));
				curr->data=no;
				curr->left=curr->right=NULL;
				pre->right=curr;
				
			}
			s=(struct stack*)malloc(sizeof(struct stack*));
			s->t=pre;
			s->next=NULL;
			if(top==NULL)
			{
				top=s;
			}
			else
			{
				s->next=top;
				top=s;
			}
		if(chl!='y' && chr!='y' && top==NULL)
			f=0;
		if(chl!='y')
			{
			pre=top->t;
			s=top;
			top=top->next;
			free(s);
			}
		else
			{
			pre=pre->left;
			
			}
		}
		display(root);	
}
void display(struct tree *p)
{
	if(p!=NULL)
	{
		printf("%d",p->data);
		display(p->left);
		display(p->right);
	}
}
