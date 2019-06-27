#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
class stack
{
int *arr;
int Size;
int tos;

int full()
{
if(tos==Size)
{
return 1;
}
else
return 0;
}

int empty()
{
if(tos==0)
return 1;
else return 0;
}

public:
stack()
{
Size=10;
tos=0;
arr=new int[Size];
}
stack(int k)
{
Size=k;
tos=0;
arr=new int[k];
}

void push(int i)
{
if(!full())
{
arr[tos]=i;
tos++;
//return arr[tos];
}
else
{
cout<<"\nFull=\t";
}
}

int pop()
{
if(!empty())
{
tos--;
return arr[tos];
}
else
{
cout<<"\nEmpty=\t";
}
}

~ stack()
{
delete[]arr;
}
};

void main()
{
clrscr();

stack s;
int x,i,y;

cout<<"\n enter Size=";
cin>>x;
stack s1(x);

for(i=0;i<=x;i++)
{
cout<<"\n enter value=";
cin>>y;
s1.push(y);
}

for(i=0;i<=x;i++)
{y=s1.pop();
if(y!=-1)
{cout<<y;
}}

getch();
}