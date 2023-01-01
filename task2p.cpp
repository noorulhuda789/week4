#include<iostream>
#include<windows.h>
void square();
void gotoxy(int,int);
int main()
{
system("cls");
square();
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







