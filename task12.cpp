#include<iostream>
using namespace std;
main()
{
int a,b,c,d,r,e;
cout<<"enter number of rose";
cin>>a;
cout<<"enter number of white rose";
cin>>b;
cout<<"enter number of tulips";
cin>>c;
e=2*a;
float f=4.10*b;
float g=2.5*c;
float h=e+f+g;
if(h>200)
{
float j=h*0.2;
cout<<"after discount" <<j;
cout<<"total price" <<h;
}
if(h<=200)
{
cout<<"total price" <<h;
}
}


