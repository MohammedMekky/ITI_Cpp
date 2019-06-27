#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr ();
int arr[7];
int i,s;
for(i=0;i<7;i++)
{
cout<<"enter arr["<<i<<"]";
cin>>arr[i];
}
cout<<"enter to search";
cin>>s;
for(i=0;i<7;i++)
{
if(s==arr[i])
{
cout<<"found at index=" <<i;
break;
}
}
if(i==7)
cout<<"not found";
getch();
}