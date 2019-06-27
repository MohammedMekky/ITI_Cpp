#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char name1[10],name2[10],fullname[20];
puts("enter your first name:");
gets(name1);
puts("enter your last name:");
gets(name2);
strcpy(fullname,name1);
strcat(fullname," ");
strcat(fullname,name2);
cout<<"your full name is:\t"<<fullname;



getch();
 }