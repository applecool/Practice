#include<iostream>
using namespace std;
double ltoau(double);

int main(){

double lightyear;
cout<<"Enter the number of light years:\n";
cin>>lightyear;
double au = ltoau(lightyear); 
cout<<""<<lightyear<<"  lightyears is "<<au<<" astronomical units!\n";
return 0;

}

double ltoau(double l){

return l*63240;
}