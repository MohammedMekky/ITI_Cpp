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
void out(employee);
void rcv(employee);
void main()
{
clrscr();
employee e;
rcv(e);
out(e);
getch();
}

void rcv(employee e){

cout<<"enter employ"<<i+1;
cout<<"\n id=    ";
cin>>e.id;
cout<<"\n enter name   ";
cin>>(e.name);
cout<<"\n enter salary  ";
cin>>e.salary;

}
void out(employee emp)
{

cout<<"\n id=  "<<emp.id;
cout<<"\n name= " <<e.name;
cout<<"\n salary= "<<e.salary;

}
