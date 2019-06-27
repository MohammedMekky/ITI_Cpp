 #include<conio.h>
 #include<iostream.h>
 void main ()
 {
  clrscr();
  int grade;
  cout<<"enter your grade= ";
  cin>>grade;
  if(grade>=90&&grade<=100)
  cout<<"A" ;
  else
  if(grade>=85&&grade<90)
  cout<<"B" ;
  else
  if(grade>=75&&grade<85)
  cout<<"C" ;
  else
  if(grade>=65&&grade<75)
  cout<<"D";
  else
  if(grade>=55&&grade<65)
  cout<<"F";
  getch();
  }
