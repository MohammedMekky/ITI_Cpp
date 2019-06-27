//#include<conio.h>
//#include<iostream.h>
//#include<string.h>
//#include<stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int add(int,int);

void m_ain()
{
//clrscr();
int x,y,z;
cout<<"Enter the first value=";
cin>>x;
cout<<"Enter the secand value=";
cin>>y;
z=add(x,y);
cout<<"\n Add="<<z;


_getch();
}
int add(int a,int b)
{
int sum;
sum=a+b;
return sum;
}