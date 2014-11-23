#include<stdio.h>
struct node
	{
		int data;
		struct node *link;
	};
void add(struct node**,int);
void display(struct node*);
void reverse(struct node **);
int main()
{ struct node *p;
p=NULL;
add(&p,2);
add(&p,-1);
add(&p,27);
display(p);
reverse(&p);
display(p);
return 0;
}
void add(struct node **q,int num)
{ struct node *r,*temp=*q;
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
	if(*q==NULL||(*q)->data>num)
	{
	*q=r;
	(*q)->link=temp;
        }
	else
	{	while(temp!=NULL)
		{
		if(temp->data<=num &&(temp->link==NULL||temp->link->data>num))
		{	r->link=temp->link;
			temp->link=r;
			return;
		}
		temp=temp->link;
		}
	}
}
void display(struct node *q)
{	while(q!=NULL)
	{	
         printf("%d\n",q->data);
	 q=q->link;
	}
}
void reverse(struct node **x)
{ struct node *q,*r,*s;
q=*x;
r=NULL;
while(q!=NULL)
{ s=r;
  r=q;
  q=q->link;
  r->link=s;
}
*x=r;
}

