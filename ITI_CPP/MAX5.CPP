#include<conio.h>
/*#include <fenv.h>
#include<string.h>
#include<stdio.h>*/
#include <iostream>
using namespace std;
int max(int,int,int);
void main_()
{
////clrscr();
int x,y,z,m;
puts("enter x=");
cin>>x;
puts("enter y=");
cin>>y;
puts("enter z=");
cin>>z;
m=max(x,y,z);
cout<<"max="<<m;
_getch();
}
void swap(int &m,int &n)
{
int z;
z==m;
m==n;
n==z;
}
int max(int a,int b,int c)
{
int mx=a;
if(mx<b)
{mx=b;
if(mx<c)
{mx=c;}}
return mx;
}
