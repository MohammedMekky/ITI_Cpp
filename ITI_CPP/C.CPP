#include< conio.h>
#include<iostream.h>
void main()
{
clrscr();
char c;
cout<<"**main menu**";
cout<<"\na)good morning";
cout<<"\nb)good night";
cout<<"\nc)exit";
cout<<"enter value:";
do
{
c=getch();
switch(c)
{
case 'a':
cout<<"\ngood morning";
break;
case 'b':
cout<<"\ngood night";
break;
case 'c':
cout<<"\nexit";
break;
defult:
cout<<"\ninvalid";
}
}while (c!='c');
getch();
}

