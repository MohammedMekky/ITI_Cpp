#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int count,x,sum=0;
for(count=1;count<=5;count++)
{
cout<<"\nenter value=";
cin>>x;
sum+=x;
}
cout<<"\nsum="<<sum;
getch();
}