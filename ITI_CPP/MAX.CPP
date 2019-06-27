#include<conio.h>
#include<iostream.h>
void main  ()
{
 clrscr();
 int x,y,z;
 cout<<"enter your 1st num";
 cin>>x;
 cout<<"enter your 2nd num";
 cin>>y;
 cout<<"enter your 3rd num";
 cin>>z;
 if(x>y&&x>z)
 cout<<"x";
 else
 if(y>x&&y>z)
 cout<<"y";
 else
 if(z>x&&z>y)
 cout<<"z";
 getch();
}