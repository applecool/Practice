#include<stdio.h>
#include<string.h>
struct emp
{
int eno;
char ename[20];
char edes[10];
int esal;
};
int main()
{
FILE *fp;
FILE *fmax;
FILE *fmin;
int i=0,j,max=10000;
char line[80];
struct emp e[10];
fp=fopen("emp.txt","r");
while(fgets(line,80,fp)!=NULL)
{
e[i].eno=atoi(strtok(line,","));
strcpy(e[i].ename,strtok(NULL,","));
strcpy(e[i].edes,strtok(NULL,","));
e[i].esal=atoi(strtok(NULL,","));
i++;
}
fmax = fopen("max.txt", "w");
fmin=fopen("min.txt","w");
max=e[0].esal;
for(j=0;j<10;j++)
{
if(max<e[j].esal){
printf("min value is printed");
fprintf(fmin,"%d\t%s\t%s\t%d\n",e[j].eno,e[j].ename,e[j].edes,e[j].esal);
}
if(max>e[j].esal){
printf("max value is printed");
fprintf(fmax,"%d\t%s\t%s\t%d\n",e[j].eno,e[j].ename,e[j].edes,e[j].esal);
}
}
fclose(fmax);
fclose(fmin);
fclose(fp);
return 0;
}