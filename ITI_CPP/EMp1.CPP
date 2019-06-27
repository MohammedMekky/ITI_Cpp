#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct employee

{
int id;
int salary;
char name[10];
};
void main()
{
clrscr();
int i;
employee x;
cout<<"\n id=    ";
cin>>x.id;
cout<<"\n enter name   ";
cin>>(x.name);
cout<<"\n enter salary  ";
cin>>x.salary;

cout<<"\n id=  "<<x.id;
cout<<"\n name= " <<x.name;
cout<<"\n salary= "<<x.salary;

 getch();
 }