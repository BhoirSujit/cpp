#include<iostream.h>
#include<conio.h>

void main()
{
 int inVal, fact;
 clrscr();
 fact = 1;

 //getting input from user
 cout<<"Enter the value of factorial : ";
 cin>>inVal;

 //calculating factorial using for loop
 for (int i = 1; i <= inVal; i++)
 {
  fact *= i;
 }

 //showing result to user
 cout<<inVal<<"! is : "<<fact;
 getch();
}