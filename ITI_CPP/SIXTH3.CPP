#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char word[10],s;
int i;
cout<<"enter your searching char:";
cin>>s;
cout<<"\n enter your word:";
cin>>word;
for(i=0;i<10;i++)
{
if(word[i]==s)
{
cout<<"\t found!!";
break;
}
}

if(i==10)
{
cout<<"\t NOT FOUND!!";
 }

getch();
 }