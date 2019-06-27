#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr ();
int arr[5];
int i,max=arr[0],min=arr[0];
for(i=0;i<5;i++)
{
cout<<"enter arr["<<i<<"]";
cin>>arr[i];
}
for(i=0;i<5;i++)
{
if(max<arr[i])
max=arr[i];
if(min>arr[i])
min=arr[i];
}
cout<<"Min=" << min;
cout<<"Max="<<max;

_getch();
}