#include<iostream>
using namespace std;
void bill(string day,int amount);

main()
 {
  int amount;
 string day;
  while(true)
    {
    cout<<"enter your bill";
    cin>>amount;
   cout<<"enter day you show";
   cin>>day;
   bill(day,amount);
   }
}
  
  void bill(string day,int amount)
  {
    float a,b;
   if(day=="sunday")
   {
     a= amount*10/100;
     b=amount-a;
     cout<<"your bill is " <<b;
   }
   if(day!="sunday")
    {
      cout<<"your bill is " <<amount;
     }
  }
     