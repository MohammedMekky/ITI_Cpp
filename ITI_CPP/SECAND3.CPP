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
if(strlen(name1)>strlen(name2))
{
if(strlen(name1)>strlen(name3))
{
cout<<"\n the longest name is:"<<name1;
}}
else if(strlen(name2)>strlen(name3))
{
cout<<"\nthe longest name is:"<<name2;
}
else
cout<<"\n the longest name is:"<<name3;



getch();
 }