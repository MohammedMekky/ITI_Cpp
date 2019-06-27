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
{cout<<" Complex="<<real<<"+"<<img<<"i";}


complex()
{real=0;
img=0;}

complex(int a)
{real=a,img=a;}

complex(int a,int b)
{real=a,img=b;}

complex add(complex m)
{complex result;
result.real=real+m.real;
result.img=img+m.img;
return result;}

complex subtract(complex m)
{complex result2;
result2.real=real-m.real;
result2.img=img-m.img;
return result2;}

};

complex Multiplay(complex,complex);
void main()
{
clrscr();
complex c1;
c1.setreal(3);
c1.setimg(7);
c1.displaycomplex();

complex c2[5];
int i,y;
for(i=0;i<5;i++)
{
puts("\n enter real=");
cin>>y;
c2[i].setreal(y);
c2[i].getreal();
puts("\n enter imaginary=");
cin>>y;
c2[i].setimg(y);
c2[i].getimg();
}
for(i=0;i<5;i++)
{
cout<<"\n";
c2[i].displaycomplex();
}
complex z;
complex c(2);
complex c3(3,4);
z=c.add(c3);
cout<<"\n ADD= ";
z.displaycomplex();

complex A(3,4),B(1,2),h;
h.displaycomplex();

h=A.subtract(B);
cout<<"\nSubtract=";
h.displaycomplex();

h=Multiplay(A,B);
cout<<"\nMultiplay=";
h.displaycomplex();



getch();
}
complex Multiplay(complex x, complex y)
{
complex result3;
result3.setreal(x.getreal()*y.getreal());
result3.setimg(x.getimg()*y.getimg());
return result3;
}

