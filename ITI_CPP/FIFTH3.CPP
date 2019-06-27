#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
struct employee
{
int id,s,ot;
char name[10];
};
void main()
{
clrscr();
employee emp;
int ts;
cout<<"enter your name:\n ";
cin>>emp.name;
cout<<"\n enter your id:\n ";
cin>>emp.id;
cout<<"\n entre your salary=\n ";
cin>>emp.s;
cout<<"\n enter your over time=\n";
cin>>emp.ot;
ts=emp.s+emp.ot;
cout<<"\n your total salary="<<ts;



getch();
 }