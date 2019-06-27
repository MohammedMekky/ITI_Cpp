#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,x[7];
min=x[0];
for(i=0;i<7;i++)
{
cout<<"enter value \n";
cin>>x[i];
}

for(i=0;i<7;i++){
if(x[i]<min)
{
min=x[i];
}
}

cout<<"min=  "<<min;

getch();
}
