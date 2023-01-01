#include<iostream>
using namespace std;
void eligible(int age);
main()
{
 int age;
 while(true)
  {
 cout<<"enter age";
  cin>>age;
 eligible(age);
  }
}
 void eligible(int a)
  {
   if(a>=18)
    {
     cout<<"you are eligible";
    }
   if(a<18)
    {
      cout<<"not eligible for vote";
   }
 }