#include<iostream>
#include<windows.h>
using namespace std;
void square();
void gotoxy(int,int);
int main()
{
system("cls");
square();
while(true)
{
 gotoxy(3,2);
  cout<<"p";
 Sleep(100);
  gotoxy(3,2);
  cout<<"  ";
  gotoxy(3,3);
  cout<<"p";
  Sleep(100);
  gotoxy(3,3);
  cout<<" ";
  Sleep(200);
}
return 0;
}

void square()
{
cout<<"*************" <<endl;
cout<<"*           *" <<endl;
cout<<"*           *" <<endl;
cout<<"*           * " <<endl;
cout<<"*************";
}
void gotoxy(int x,int y)
{
COORD coorf;
coorf.X=x;
coorf.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coorf);
}