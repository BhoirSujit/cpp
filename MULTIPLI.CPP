#include <iostream.h>
#include <conio.h>

void main(){
 int num1, num2, res;
 clrscr();
 cout << "Enter the value of num1 ";
 cin >> num1;
 cout << "Enter the value of num2 ";
 cin >> num2;
 res = num1 * num2;
 cout << "multiplication is : " << res;
 res = num1-num2;
 cout << "\nsubstraction is : " << res;
 getch();
}