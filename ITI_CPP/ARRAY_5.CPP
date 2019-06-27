#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,num,sum=0;
int x[5];
for(i=0;i<5;i++)
{
cout<<"enter value index["<<i<<"]";
cin>>x[i];
}
cout<<"enter value";
cin>>num;
for(i=0;i<5;i++)
{
if(num==x[i])
{
sum=sum+1;
}
}
cout<<"repeated:"<<sum;
getch();
}