#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x;
do{
cout<<"\**simple menu** \n ";
cout<<"1-good morning\n ";
cout<<"2-goood evining \n ";
cout<<"3-exit/n ";
cout<<"plc entr enter choice \n ";
cin>>x;
switch(x)

{
case 1:
cout<<"good morning\n";
break;
case 2:
cout<<"good evining\n";

case 3:
cout<<"exit";
break;
default:
cout<<"invalid choice\n";
}
}while(x!=3);
getch();
}