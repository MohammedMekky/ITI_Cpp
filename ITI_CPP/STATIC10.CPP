#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
class complex
{
int real;
int img;
static vacationdays;
public:
static int getvacation()
{return vacationdays;}

int setreal(int k)
{
real=k;
}
void getreal()
{
return real;}
int setimg(int k)
{img=k;}
void getimg()
{
return img;}
complex()
{
real=0;
img=0;
}
};


void main()
{
clrscr();
complex c1;
c1.setreal(3);
c1.setimg(5);
complex::getvacations=5;
cout<<"c1="<<c1.real<<"+"<<c1.img<<"i";
cout<<"vacation days="<<vacationdays;



getch();
 }