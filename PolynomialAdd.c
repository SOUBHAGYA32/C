//Addition of two polynomials
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct poly{
 	int coef;
 	int exp;
 	struct poly *next;
 };
 struct poly *first1=NULL,*first2=NULL,*first3=NULL,*curr,*last;
 struct poly *create();
 struct poly *createnode(struct poly*,int,int);
 struct poly *add(struct poly *f1,struct poly *f2);
 void display(struct poly*);
 	int main()
 	{
 		printf("\nFor first Polynomial");
 		first1=create();
 		display(first1);
 		printf("\nFor second Polynomial");
 		first2=create();
 		display(first2);
 		first3=add(first1,first2);
 		display(first3);
 		return 0;
	}
	struct poly *create()
	{
		char ch='Y';
		int c,e;
		struct poly *f=NULL;
		while(ch=='Y'|| ch=='y')
		{
			printf("\nEnter Coeffiecient and Exponents:");
			scanf("%d%d",&c,&e);
			curr=(struct poly*)malloc(sizeof(struct poly));
			curr->coef=c;
			curr->exp=e;
			curr->next=NULL;
			if(f==NULL)
			{
				f=last=curr;
			}
			else
			{
				last->next=curr;
				last=curr;
			}
			printf("\n Want Another Term?(Y/N)");
			getchar();
			ch=getchar();
			
		}
		return f;
	}
	struct poly *createnode(struct poly *p,int c,int e)
	{
		curr=(struct poly*)malloc(sizeof(struct poly));
		curr->coef=c;
		curr->exp=e;
		curr->next=NULL;
		if(p==NULL)
		{
			p=last=curr;
		}
		else
		{
			last->next=curr;
			last=curr;
		}
		return p;
	}
	struct poly *add(struct poly *f1,struct poly *f2)
	{
	
		struct poly *p=f1,*q=f2;
		while(p!=NULL)
		{
			if(p->exp>q->exp)
			{
				first3=createnode(first3,p->coef,p->exp);
				p=p->next;
			}
			if(p->exp<q->exp)
			{
				first3=createnode(first3,q->coef,q->exp);
				q=q->next;
				if(q==NULL)
					break;
			}
			if(p->exp==q->exp)
			{
				first3=createnode(first3,p->coef+q->coef,p->exp);
				p=p->next;
				q=q->next;
				if(q==NULL)
					break;
			}
		}
		while(q!=NULL)
		{
			first3=createnode(first3,q->coef,q->exp);
			q=q->next;
		}
		while(p!=NULL)
		{
			first3=createnode(first3,p->coef,p->exp);
			p=p->next;
		}
		return first3;
	}
	void display(struct poly *m)
	{
		printf("\n");
		while(m!=NULL)
		{
			if(m->next!=NULL)
				printf("%dx^%d+",m->coef,m->exp);
				else
					printf("%dx^%d",m->coef,m->exp);
					m=m->next;
		}
	}
