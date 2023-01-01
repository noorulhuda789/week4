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
 gotoxy(15,0);
 printn();
gotoxy(16,0);
 printo();
cout<<endl;
 gotoxy(17,0);
 printo();
cout<<endl;
gotoxy(18,0);
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