#include<iostream.h>
#include<conio.h>

void main()
{
 int ar[2][2] = {{2,4},{3,6}};
 clrscr();

 for(int i = 0; i < 2; i++)
 {
  for (int j = 0; j < 2; j ++)
  {
   cout<<ar[i][j]<<"\t";
  }
  cout<<"\n";
 }
 getch();
}