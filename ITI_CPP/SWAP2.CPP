#include<iostream.h>
#include<conio.h>

void main()
{clrscr();
int x;
int y ;
cout<<"enter your variable x ";
cin>>x;
cout<<"enter your varible y";
cin>>y;
swap(x,y);
cout<< "x="<<x;
cout<<"\n y="<<y;
  getch();
  }

   int swap(int& x1,int& y1)
{
int temp;
temp=x1;
x1=y1;
y1=temp;
	}