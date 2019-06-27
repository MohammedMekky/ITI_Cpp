#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
int sumarray(int[],int);
void receivearray(int[],int);
int minarray(int[],int);
void displayarray(int[],int);
void reversearray(int[],int);
int maxarray(int[],int);
int numofrepeatarray(int[],int);
void searcharray(int[],int);


void main()
{
clrscr();
int x[5],m=5,sum;
sum=sumarray(x[],5);
cout<<"sum of the ARRAY="<<sum;


getch();
 }
int sumarray(intx[],intm)
{
int i=0,x[5];
for(i=0;i<5;i++)
{
cout>>"enter value";
gets(x[i]);
h=h+i;
return h;
}

