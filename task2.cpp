#include<iostream>
using namespace std;
 void reslut(int marks);
main()
{
 int marks;
 while(true)
  {
 cout<<"enter marks";
 cin>>marks ;
  reslut(marks);
   cout<<endl;
  }
}
 void reslut(int marks)
{
 if (marks >50) 
 {
  cout<<"pass";
 }
 if(marks<50)
  {
  cout<<"fail ";
  }
  if(marks==50)
   {
    cout<<"you have to work hard";
    }
}