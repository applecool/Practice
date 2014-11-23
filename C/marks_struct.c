#include <stdio.h>
struct result
{
	int rno, mrks[5];
	char nm;
}res;
void main()
{
	int i,total;
	total = 0;
	printf("\n\t Enter Roll Number : ");
	scanf("%d",&res.rno);
	printf("\n\t Enter Marks of 3 Subjects : ");
	for(i=0;i<3;i++)
	{
	scanf("%d",&res.mrks[i]);
	total = total + res.mrks[i];
	}
	printf("\n\n\t Roll Number : %d",res.rno);
	printf("\n\n\t Marks are :");

	for(i=0;i<3;i++)
	{
	printf("marks:%d\n",res.mrks[i]);
	}
	printf("\n\n\t Total is : %d",total);
}