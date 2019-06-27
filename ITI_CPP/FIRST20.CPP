#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
class complex
{
int real;
int img;
public:
void setreal(int r)
{real=r;}
int getreal()
{return real;}
void setimg(int x)
{img=x;}
int getimg()
{return img;}
void displaycomplex()
{cout<<"Complex="<<real<<"+"<<img<<"i";}};


void main()
{
clrscr();
complex c1;
c1.setreal(3);
c1.getreal();
c1.setimg(7);
c1.getimg();
c1.displaycomplex();

complex c2[5];
int i,y;
for(i=0;i<5;i++)
{
puts("enter real=");
cin>>y;
c2[i].setreal(y);
c2[i].getreal();
puts("enter imaginary=");
cin>>y;
c2[i].setimg(y);
c2[i].getimg();
c2[i].displaycomplex();
}



getch();
 }