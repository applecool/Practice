#include<iostream>
using namespace std;

int main(){

char cat[4]={'a','b','c','d'};
char bat[4]={'a','b','c','\0'};

cout<< cat <<"\n"; // displays shit after the abcd till it encounters null
cout << bat;// displays abc and stops as it encounters null character
return 0;
}