#include<iostream>
using namespace std;

void add(int num1,int num2);
void sub(int num1,int num2);
void dive(int num1,int num2);
void mul(int num1,int num2);
main()
{
 int num1;
 int num2;
 char operation;
 while(true)
  {
 cout<<"enter number" ;
 cin>>num1;
 cout<<"enter 2nd number";
 cin>>num2;
 cout<<"enter operation you want +-*/";
 cin>>operation;
  if(operation=='+')
   {
    add(num1,num2);
   }
  if(operation=='-')
   {
    sub(num1,num2);
   }
  if(operation=='*')
  {
   mul(num1,num2);
  }
  if(operation=='/')
  {
    div(num1,num2);
   }
   }
}

void add(int num1,int num2)
{
 int sum;
 sum=num1+num2;
 cout<<"sum is " <<sum;
}

void sub(int num1,int num2)
{
 int minus;
 minus=num1-num2;
cout<<"sabtraction relut is " <<minus;
}

void dive(int num1,int num2)
{ 
 int divide ;
 divide=num1/num2;
 cout<<"divison answer is" <<divide;
}
void mul(int number6,int number7)
{
 int pro;
 pro =number6*number7;
 cout<<"multipliacrion answer is" <<pro;
}


