#include<iostream.h>
#include<conio.h>

void main()
{
 int num1, num2, sum;
 clrscr();

 //getting intput from user
 cout<<"Enter the value of first number ";
 cin>>num1;
 cout<<"Enter the value of second number ";
 cin>>num2;

 //showing result to user
 sum = num1 + num2;
 cout<<"Addition of "<<num1<<" and "<<num2<<" is : "<<sum;

 getch();
}