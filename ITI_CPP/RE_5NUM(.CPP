#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr ();
int x[5];
int i,sum=0;
for(i=0;i<5;i++)
{
cout<<"enter value";
cin>>x [i];
}
for(i=0;i<5;i++)
{
sum =sum+x[i];
}
cout<<"\nsum="<<sum;
getch();
}