#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int x,sum=0;
while (sum<100)
{
cout<<"enter value= ";
cin>>x;
sum+=x;
}
cout<<"sum="<<sum;
getch();
}