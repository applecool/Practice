#include<iostream>
using namespace std;

void call(int);

int main(){

call(2);

cout<< "\nPick an integer:";
int count;
cin >> count;

call(count);

return 0;

}

void call(int n){
 
cout << "Eat food "<< n <<" times a day!";

}