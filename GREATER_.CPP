 #include<iostream.h>
 #include<conio.h>

 void main()
 {
    int a, b, c;
    clrscr();

    cout<<"Enter the value of a b and c";
    cin>>a>>b>>c;

    if (a == b && a == c)
    {
      cout<<"all are equals";
    }
    else if(a >= b && a >= c)
    {
      cout<<"a is greater";
    }
    else if (b >= a && b >= c)
    {
      cout<<"b is greater";
    }
    else if (c >= a && c >= b)
    {
      cout<<"c is greater";
    }
    getch();
 }




















































