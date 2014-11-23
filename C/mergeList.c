/* C program to merge two linked lists */
#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node *link;
	};
void add(struct node**,int);
void merge(struct node*,struct node*, struct node**);
int main()
{
struct node *first,*second,*third;
first=second=third=NULL;
add(&first,23);
add(&first,25);
add(&first,27);
printf("\n First List \n");
display(first);


add(&second,22);
add(&second,24);
add(&second,26);
printf("\n Second List \n");
display(second);
merge(first,second,&third);
printf("\n resultant List \n");
display(third);

return 0;
}
void add(struct node **q,int num)
{
	struct node *r,*temp=*q;
r=(struct node*)malloc(sizeof(struct node));
r->data=num;
if(*q==NULL||(*q)->data>num)
{
	*q=r;
	(*q)->link=temp;
}
else
{
	while(temp!=NULL)
	{
		if(temp->data<num &&(temp->link==NULL||temp->link->data>num))
		{
			r->link=temp->link;
			temp->link=r;
			return;
		}
		temp=temp->link;
	}
	r->link=NULL;
	temp->link=r;
}
}
void display(struct node *q)
{
	while(q!=NULL)
	{
		printf("data: %d\n",q->data);
		q=q->link;
	}

}

void merge(struct node *p,struct node *q, struct node **s)
{
	struct node *z=NULL;
	if(p==NULL && q==NULL)  /*if both are empty*/
	   { printf("List Does not exist unable to merge ");
	   	 return;
	   }
	while(p!=NULL && q!=NULL)/*traverse both linked list till the end.if end of any one list is reached loop is terminated */
	{
		if(*s==NULL) /*if node being added in the first node */
		{
			*s=(struct node*)malloc(sizeof(struct node));
			z=*s;
		}
		else
		{
			z->link=(struct node*)malloc(sizeof(struct node));
			z=z->link;
		}
		if(p->data<q->data)
		{
			z->data=p->data;
			p=p->link;
		}
		else
		{
			if(q->data<p->data)
			{
				z->data=q->data;
				q=q->link;
			}
			else
			{
				if(p->data==q->data)
				{
					z->data=q->data;
					p=p->link;
					q=q->link;
				}
			}
		}
	}//end of while loop
	while(p!=NULL)/*if end of first list has not been reached */
	{
		z->link=(struct node*)malloc(sizeof(struct node));
		z=z->link;
		z->data=p->data;
		p=p->link;
	}
	while(q!=NULL)/*if end of second list has not been reached */
	{
		z->link=(struct node*)malloc(sizeof(struct node));//memory is created
		z=z->link;  // z is move forward
		z->data=q->data;//q of data copyed into z of data
		q=q->link;//q is move forward
	}
	z->link=NULL; //end of the resultant
}

