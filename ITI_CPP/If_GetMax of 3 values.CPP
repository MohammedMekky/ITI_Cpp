#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int x,y,z;
cout<<"enter your first number";
cin>>x;
cout<<"enter your second numer";
cin>>y;
cout<<"enter your third numer";
cin>>z;
if(x>y&&x>z)
cout<<x<<"is the greatest";
else if(y>x&&y<z)
cout<<y<<" greatest";
else
cout<<z<<"is the gretest";
getch();
}