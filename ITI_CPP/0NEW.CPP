#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr ();
int grade[3][2];
int row,col;
for(row=0;row<3;row++)
{
for(col=0;col<2;col++)
{
cout<<"enter grade["<<row<<"]["<<col<<"]";
cin>>grade[row][col];
}
}
for(row=0;row<3;row++)
{
for(col=0;col<2;col++)
{
cout<<"\t"<<grade[row][col];
}
cout<<"\n";
}
getch();
}