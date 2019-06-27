#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
int i;
char name[5][10];
;
for(i=0;i<5;i++)
{
cout<<"enter name:";
gets(name[i]);
}
for(i=0;i<5;i++)
{
cout<<"\n \t name No"<<i<<"\t"<<name[i];
 }

getch();
 }