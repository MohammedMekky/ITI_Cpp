#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
class complex
{
int real;
int img;
public:
complex();
complex(int);
complex(int,int);
int setreal(int);
void getreal();
int setimg(int);
void getimg();
void displaycomplex();
complex add(complex);
void operator=(complex);
int operator==(complex);
complex operator++();
complex operator+(int);
operator int();
};
complex complex::operator+(int k)
{complex result;
result.real=real+k;
result.img=img+k;
return result;
}

complex::operator int()
{return real;
}


complex complex::operator++()
{
complex result;
result.real=real++;
result.img=img++;
return result;
}


int complex::operator==(complex c)
{
if(real==c.real)&(img==c.img)
{
return 1;
}
else
return 0;

}


void complex::operator=(complex c)
{real=c.real;
img=c.img;
}


complex complex::add(complex c)
{complex result;
result.real=real+c.real;
result.img=img+c.img;
return result;
}


void complex::setreal(int k)
{
real=k;
}
int complex::getreal()
{
return real;
}
void complex::setimg(int k)
{
img=k;
}
int complex::getimg()
{
return img;
}
void complex::displaycomplex()
{
cout<<"\n complex="<<real<<"+"<<img<<"i";
}
complex::complex()
{
real=0;
img=0;
}
complex::complex(int x,int y)
{
real=x;
img=y;
}
void main()
{
clrscr();
complex c1(3,4),c2(7,9),c3(1,1),c4;
c3=c1;
c3.displaycomplex();
c4=c1+c2;
c4.displaycmplex();
if(c1==c2)
{
cout<<"c1==c2";
}
else
cout<<"c1!=c2";
++c1;
c1.displaycomplex();
c4=c1+5;
c4.displaycomplex();
int x;
x=(int)c1;
cout<<x;

getch();
 }