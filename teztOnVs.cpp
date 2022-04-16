#include<iostream>
using namespace std;

class MyClass
{
    public:
    void myFun()
    {
        cout<<"Hello world";
        cout<<"\nbye world";
    }
};

int main()
{
    MyClass myclass;
    myclass.myFun();
    return 0;
}

