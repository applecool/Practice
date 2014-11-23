#include<iostream>
using namespace std;
int square(int);

int main(){

cout <<"Enter the value to find square:\n";

int no;

cin >> no;

int finalres=square(no);

cout <<"The square of the value is "<<finalres<<" !";

return 0;
}

int square(int i){
 
return i*i;

}