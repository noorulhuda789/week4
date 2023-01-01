#include<iostream>
#include<windows.h>
using namespace std;
void square();
void gotoxy(int,int);
void printp(int x,int y);
int main()
{
int x,y;
x=3;
y=3;
system("cls");
square();
printp(x,y);
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
void printp(int x,int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}






