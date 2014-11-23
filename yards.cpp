#include<iostream>
using namespace std;
int furlongtoyards(int);

int main(){

int furlong;
cout<<"Enter the distance in furlongs\n";
cin>>furlong;

int yards = furlongtoyards(furlong); 

cout<<""<< furlong <<" furlong is equal to "<< yards <<" yards!\n";
return 0;
}

int furlongtoyards(int fur){

return fur*220;
}