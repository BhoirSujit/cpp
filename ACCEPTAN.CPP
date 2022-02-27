#include<iostream.h>
#include<conio.h>

void main()
{
 char name[20], roll_no[5], addr[20], _class[10];
 int age;
 clrscr();

 //getting data from user
 cout<<"Enter your Name : ";
 cin>>name;
 cout<<"Enter your Age : ";
 cin>>age;
 cout<<"Enter your Roll no. : ";
 cin>>roll_no;
 cout<<"Enter your Address : ";
 cin>>addr;
 cout<<"Enter your Class : ";
 cin>>_class;

 //showing results to user
 cout<<"\nPersional Details";
 cout<<"\nYour Name is "<<name;
 cout<<"\nYour Age is "<<age;
 cout<<"\nYour Roll no. is "<<roll_no;
 cout<<"\nYour Address is "<<addr;
 cout<<"\nYour Class is "<<_class;

 getch();
}