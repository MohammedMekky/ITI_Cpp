#include< conio.h>
#include<iostream.h>
void main()
{
clrscr();
char ch;
cout<<"**main menu**";
cout<<"\na)good morning";
cout<<"\nb)good night";
cout<<"\nc)exit";
cout<<"\nenter your choice:";
ch=getche();
switch(ch)
{
case 'a':
cout<<"good morning";
break;
case 'b':
cout<<"good night";
break;
case 'c':
cout<<"exit";
break;
defult:
cout<<"invalid";
}
getch();
}