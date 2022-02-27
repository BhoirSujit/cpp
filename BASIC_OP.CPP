#include<iostream.h>
#include<conio.h>

void main()
{
 int num1, num2, add, sub, mul, div;
 clrscr();

 //getting input from user
 cout<<"Enter the value of first number ";
 cin>>num1;
 cout<<"Enter the value of second number ";
 cin>>num2;

 //doing operations
 add = num1 + num2;
 sub = num1 - num2;
 mul = num1 * num2;
 div = num1 / num2;

 //showing results to user
 cout<<"\nAddition is : "<<add;
 cout<<"\nSubstraction is : "<<sub;
 cout<<"\nMultiplication is : "<<mul;
 cout<<"\nDivision is : "<<div;

 getch();
}