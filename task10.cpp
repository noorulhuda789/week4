#include<iostream>
using namespace std;
void ticket();
main()
{
ticket();
}
void ticket()
{
int a;
string name;
cout<<"enter ticket price";
cin>>a;
cout<<"country name";
cin>>name;
if(name=="pakistan")
{
float c,d;
c=a*0.05;
d=a-c;
cout<<"your ticket price is" <<d;
}
if(name=="ireland")
{
float c,d;
c=a*0.1;
d=a-c;
cout<<"your ticket price is" <<d;
}
if(name=="india")
{
float c,d;
c=a*0.2;
d=a-c;
cout<<"your ticket price is" <<d;
}
if(name=="englang")
{
float c,d;
c=a*0.3;
d=a-c;
cout<<"your ticket price is" <<d;
}
if(name=="canada")
{
float c,d;
c=a*0.45;
d=a-c;
cout<<"your ticket price is" <<d;
}
}

 