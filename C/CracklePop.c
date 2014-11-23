/*Write a program that prints out the numbers 1 to 100 (inclusive). 
If the number is divisible by 3, print Crackle instead of the number. 
If it's divisible by 5, print Pop. If it's divisible by both 3 and 5, print CracklePop. You can use any language. */

#include<stdio.h>

void display(int);

int main(){
    int no = 1;

    display(no);

    return 0;
}

void display(no){
 
if(no<=100){
  	if(no%3==0 && no%5 ==0){
    	printf(" CracklePop "); 
	}else if(no%3 == 0){
     		printf(" Crackle "); 
 		}else if(no%5 ==0){
				printf(" Pop ");
 			}else {
				printf("%d ",no);
				
 			}
			display(no+1);
	}  	
}