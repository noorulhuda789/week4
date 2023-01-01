#include<iostream>
#include<windows.h>
using namespace std;
void printn();
void printo();
void printr();
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
main()
{
system("cls");
gotoxy(3,8);
 printn();
gotoxy(16,8);
 printo();
 gotoxy(24,8);
 printo();
gotoxy(32,8);
printr();
}
void printn()
{
cout<<"*        *"<<endl;
cout<<"* *      *"<<endl;
cout<<"*  *     * "<<endl;
cout<<"*     *  *"<<endl;
cout<<"*        *";
}
void printo()
{
cout<<"   * * *    "<<endl;
cout<<" *        * "<<endl;
cout<<" *        *"<<endl;
cout<<" *        *"<<endl;
cout<<"  *  *  *";
}
void printr()
{
cout<<"****** " <<endl;
cout<<"*    *" <<endl;
cout<<"******" <<endl;
cout<<"**" <<endl;
cout<<"*   *";
}