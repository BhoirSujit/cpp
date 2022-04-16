#include<iostream>
using namespace std;

class Fact
{
    public:
    int userInput()
    {
        int n;
        cout<<"Enter the number ";
        cin>>n;
        return n;
    }

    long facto(int n)
    {
        long f = 1; 
        for(int i = 2; i <= n; i++)
        {
            f *= i;
        }

        return f;
    }
};

int main()
{
    Fact fact;
    int n = fact.userInput();
    long f = fact.facto(n);

    cout<<"Factorial value is : "<<f;

    return 0;
}