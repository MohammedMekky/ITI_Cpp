#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char name1[10],name2[10],name3[10];
cout<<"enter the first name:";
cin>>name1;
cout<<"\n enter the secand name:";
gets(name2);
cout<<"\n enter the third name:";
gets(name3);
if(strcmpi(name1,name2)>0)
{
if(strcmpi(name1,name3)>0)
{
cout<<"\n the last name is:"<<name1;
}}
else if(strcmpi(name2,name3)>0)
{
cout<<"\n the last name is:"<<name2;
}
else
cout<<"\n the last name is:"<<name3;



getch();
 }