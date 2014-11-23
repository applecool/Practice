#include<iostream>
using namespace std;
#include<cmath>

int main(){

double sheet;

cout << "How many sheets do you have?";
cin >> sheet;

double side;

side = sqrt(sheet);

cout << "You can covere these many sheets with the"<<side;
cout <<"\n";

return 0;



}