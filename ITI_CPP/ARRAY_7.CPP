#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr();
int row,col,sum=0;
int x[3][4];
for(row=0;row<3;row++)
{
for(col=0;col<4;col++)
{
cout<<"inter value index["<<row<<"]["<<col<<"]";
cin>>x[row][col];
}
}
for(row=0;row<3;row++)
{
sum=0;
for(col=0;col<4;col++)
{
sum=sum+x[row][col];
}
cout<<"\n"<<sum;
}
getch();
}