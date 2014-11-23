#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<string.h>
int main()
{
int qid,i;
struct expe
{
	long mtype;
	int eno;
	int sal;
	char ename[25];

}e[4];
qid=msgget((key_t)10,IPC_CREAT|0666);
if(qid==-1)
{perror("Message failed");}
for(i=0;i<4;i++)
{
	e[i].mtype=i+1;
	printf("Enter eno,esal,ename");
	scanf("%d%d%s",&e[i].eno,&e[i].sal,e[i].ename);

}
int size=sizeof(struct expe)-sizeof(long);
if(msgsnd(qid,&e[0],size,0))
	perror("msgsnd1 failed");
if(msgsnd(qid,&e[1],size,0))
	perror("msgsnd1 failed");
if(msgsnd(qid,&e[2],size,0))
	perror("msgsnd1 failed");
if(msgsnd(qid,&e[3],size,0))
	perror("msgsnd1 failed");

printf("\n Message is sent sucessfull to %d ",qid);
return 0;
}
