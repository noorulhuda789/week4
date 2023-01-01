
#include<iostream>
using namespace std;
void bill(string day,int amount);

main()
{
  int amount;
  string day;
  cout<<"enter your bill";
  cin>>amount;
  cout<<"enter day you show";
  cin>>day;
   bill(day,amount);
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
   if(day=="monday")
    {
     float c,d;
      c=amount*5/100;
      d=amount-c;
      cout<<"your bill is"  <<d;
     }
  if(day=="tuesday")
    {
     float e,f;
      e=amount*5/100;
      f=amount-e;
      cout<<"your bill is"  <<f;
  }
  if(day=="wednesday")
    {
     float g,h;
      g=amount*5/100;
      h=amount-g;
      cout<<"your bill is"  <<h;
  }
  if(day=="thursday")
    {
     float j,i;
      i=amount*5/100;
      j=amount-i;
      cout<<"your bill is"  <<j;
  }
   if(day=="friday")
    {
     float h,k;
      h=amount*5/100;
      k=amount-h;
      cout<<"your bill is"  <<k;
    }
     if(day=="saturaday")
    {
     float l,m;
      l=amount*5/100;
      m=amount-l;
      cout<<"your bill is" <<m;
     }

  }