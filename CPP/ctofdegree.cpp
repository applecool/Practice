#include<iostream>
using namespace std;
double ctof(double);

int main(){

double celsius;
cout<<"Enter the celsius temperature:\n";
cin>>celsius;
double fahrenheit = ctof(celsius); 
cout<<""<<celsius<<" degrees celsius is "<<fahrenheit<<" degrees fahrenheit!\n";
return 0;

}

double ctof(double c){

return 1.8*c + 32.0;
}