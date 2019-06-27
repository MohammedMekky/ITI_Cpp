#include<conio.h>
//#include<iostream.h>
//#include<string.h>
//#include<stdio.h>
#include <iostream>
using namespace std;
//void swap(int&,int&);
void Main()
{
//clrscr();
int x,y;
puts("enter x=");
cin>>x;
puts("enter y=");
cin>>y;
swap(x,y);
cout<<"\n new x="<<y;
cout<<"\n new y="<<x;
_getch();
}
//void swap(int&m,int&n)
//{
//int z;
//z==m;
//m==n;
//n==z;
//}