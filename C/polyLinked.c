#include<stdio.h>
struct node
{
	int coe;
	int order;
	struct node *link;
};
void poly_append(struct node **q,int coef,int expo)
{
	struct node *temp;
	temp=*q;
	if(*q==NULL)
	{
		*q=(struct node*)malloc(sizeof(struct node));
		temp=*q;
	}
	else
	{
		while(temp->link!=NULL)
			temp=temp->link;

		temp->link=(struct node*)malloc(sizeof(struct node));
		temp=temp->link;
	}
	/*assign coefficient and exponent*/
	temp->coe=coef;
	temp->order=expo;
	temp->link=NULL;
}
void display_poly(struct node *q)
{
	while(q!=NULL)
	{
		printf("coeff:%d\t expo:%d\n",q->coe,q->order);
		q=q->link;
	}
}

void derivate(struct node **q)
{
	struct node *tmp=*q,*p;

 for(;tmp->order!=0;p=tmp,tmp=tmp->link)
 {
    tmp->coe=tmp->coe*tmp->order;
    tmp->order=tmp->order-1;
 }
p->link=NULL;
free(tmp);
}

int main()
{
  struct node *first=NULL;
  poly_append(&first,3,2);
  poly_append(&first,2,1);
  poly_append(&first,1,0);
  printf("display before derivative equation\n ");
  display_poly(first);
  printf("display after derivative equation\n ");
  derivate(&first);
  display_poly(first);
  return 0;
}


