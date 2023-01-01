#include<iostream>
using namespace std;
void even(int number);

main()
{
int number;
while(true) 
{
cout<<"enter number";
cin>>number;
even(number);
 }
}
void even(int number)
{
  	if(number%2==0)
     {
        cout<<"even number";
     }
    if(number%2!=0)
    {
      cout<<"odd number";
    }
} 


