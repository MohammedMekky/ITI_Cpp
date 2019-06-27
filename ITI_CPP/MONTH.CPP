#include< conio.h>
#include<iostream.h>
void main()
{
clrscr();
char ch;
cout<<"**main menu**";
cout<<"\na)Jan";
cout<<"\nb)Feb";
cout<<"\nc)Mar";
cout<<"\nd)Apr";
cout<<"\ne)May";
cout<<"\nf)Jun";
cout<<"\ng)Jul";
cout<<"\nh)Agu";
cout<<"\ni)Sep";
cout<<"\nk)Oct";
cout<<"\nl)Nov";
cout<<"\nm)Dec";
cout<<"\nenter your choice:";
ch=getche();
switch(ch)
{
case 'a':
cout<<"31";
break;
case 'b':
cout<<"28";
break;
case 'c':
cout<<"30";
break;
case 'd':
cout<<"31";
break;
case 'e':
cout<<"30";
break;
case 'f':
cout<<"31";
break;
case 'g':
cout<<"31";
break;
case 'h':
cout<<"31";
break;
case 'i':
cout<<"30";
break;
case 'k':
cout<<"31";
break;
case 'l':
cout<<"30";
break;
case 'm':
cout<<"31";
break;
}
getch();
}