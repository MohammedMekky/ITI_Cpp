#include<conio.h>
#include<iostream.h>
void main ()
{
clrscr ();
char mychoice ;
cout<<"\nenter your choice";
mychoice=getche();
int x ;
x=mychoice;
if(x==13)
cout<<"\nenter";
else
if(x==27)
cout<<"\nESC";
getch();
}