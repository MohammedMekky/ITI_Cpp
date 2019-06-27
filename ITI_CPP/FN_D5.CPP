#include<conio.h>
//#include<iostream.h>
#include<iostream>
//#include<string.h>
//#include<stdio.h>
using namespace std;
void receive(int[],int);
void sumarray(int[],int);
//void displayarray(int[],int);
int minarray(int [],int);
int maxarray(int[],int);
void searcharray(int[],int);
void reversearray(int[],int);
int rebeatarray(int[],int);

void Main_()
{
////clrscr();
int s,min,max;
int arr[5];
receive(arr,5);
sumarray(arr,5);
min=minarray(arr,5);
cout<<"\n the min array value="<<min;
max=maxarray(arr,5);
cout<<"\n the max array value="<<max;
searcharray(arr,5);
reversearray(arr,5);
rebeatarray(arr,5);

_getch();
}

void receive(int x[],int m)
{
int i;
for(i=0;i<m;i++)
{
cout<<"\n Enter value=";
cin>>x[i];
}
}
void sumarray(int x[],int m)
{
int i,sum=0;
for(i=0;i<m;i++)
{
sum=sum+x[i];
}
cout<<"\n Array Sum="<<sum;
}
//void displayarray(int x[],int m)
//{
//int i;
//for(i=0;i<m;i++)
//{
//cout<<"array["<<i<<"]="<<x[i];
//}
//}
int minarray(int x[],int m)
{
int i;
int min=x[0];
for(i=0;i<m;i++)
{
if(min>x[i])
{
min=x[i];
}
}
return min;
}
int maxarray(int x[],int m)
{
int i;
int max=x[0];
for(i=0;i<m;i++)
{
if(max>x[i])
{
max=x[i];
}}
return m;
}
void searcharray(int x[],int m)
{
int i;
int srch;
cout<<"\n enter your search value=";
cin>>srch;
for(i=0;i<m;i++)
{
if(srch==x[i])
{
cout<<"\n Found!!";
}

break;
}

if(i==srch)
cout<<"\n NOT Found!!";
}

void reversearray(int x[],int m)
{
  int i;
  cout<<"\n the reverse of array :";
  for(i=m-1;i>=0;i--)
  {
  cout<<"\n value of arr["<<i<<"]]"<<x[i];
  }
}

int rebeatarray(int x[],int m)
{
int i,srch;
int rebeat=0;
cout<<"\n enter your repeat search value=";
cin>>srch;
for(i=0;i<m;i++)
{
if(srch==x[i])
{
rebeat++;
}
}
cout<<"\n your value have been repeated for \t"<<rebeat<<"\t times";
if(rebeat==0)

cout<<"\n NOT Found";
return rebeat;


}