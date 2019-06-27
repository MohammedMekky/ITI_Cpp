#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int x,sum=0;
do
{
cout<<"enter value=";
cin>>x;
if(x% 2!=0);
sum+=x;
}
while(x% 2!=0);
cout<<"sum="<<sum;
getch();
}