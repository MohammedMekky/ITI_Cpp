#include<conio.h>
//#include<iostream.h>
//#include<string.h>
//#include<stdio.h>
#include <iostream>
using namespace std;
struct emp

{
	int id, age, salary, ot;
	char name[10];
};

void receiveemp(emp&);
int add(int,int);
void displayemp(emp);

  void _Main()
{
//clrscr();
int x,y,z;
emp e;
receiveemp(e);
displayemp(e);

_getch();
}
//  int add(int a,int b)
//
//{
//int sum;
//sum=a+b;
//return sum;
//}
  void receiveemp(emp& emp)

  {
	  cout << "\n enter name=";
	  cin >> emp.name;
	  cout << "\n enter id=";
	  cin >> emp.id;
	  cout << "\n enter age=";
	  cin >> emp.age;
	  cout << "\n enter salary=";
	  cin >> emp.salary;
	  cout << "\n enter over time=";
	  cin >> emp.ot;
	  //return emp;
  };
  

  void displayemp(emp emp)

{
int ts;
cout<<"\n Name="<<emp.name;
cout<<"\n id="<<emp.id;
cout<<"\n age="<<emp.age;
ts=emp.salary+emp.ot;
cout<<"\n total salary="<<ts;
}