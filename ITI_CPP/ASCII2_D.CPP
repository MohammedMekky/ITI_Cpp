#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
int x;
char z;
cout<<"enter a or s or d or any botton=";
cin>>z;
x=z;
if(x==97)
{
cout<<"you enterd ( a )";
}
if(x==100)
{
cout<<"you enterd ( d )";
}
if(x==115)
{
cout<<"you enterd ( s )";
}
if(x!97&& x!=100 && x!=115)
{
cout<<"you enterd ( another bottom )";
}


getch();
 }