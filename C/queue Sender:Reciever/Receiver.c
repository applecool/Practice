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

int size=sizeof(struct expe)-sizeof(long);
qid=msgget((key_t)10,IPC_CREAT|0666);
if(qid==-1)
{perror("Message failed");}
if(msgrcv(qid,&e[0],size,1,0)==-1)
  perror("msgrec1 failed");
if(msgrcv(qid,&e[1],size,2,0)==-1)
  perror("msgrec1 failed");
if(msgrcv(qid,&e[2],size,3,0)==-1)
  perror("msgrec1 failed");
if(msgrcv(qid,&e[3],size,4,0)==-1)
  perror("msgrec1 failed");
for(i=0;i<4;i++)
	printf("\n %d %d %s",e[i].eno,e[i].sal,e[i].ename);

return 0;
}
