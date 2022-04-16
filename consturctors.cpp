#include<iostream>
using namespace std;

class Con
{
    public:
    Con()
    {
        cout<<"This is Defalt constructor\n";
    }

    Con(int a)
    {
        cout<<"this is Parameterize constructor\n";
    }

    ~Con()
    {
        cout<<"This is De-Constructor\n";
    }
};

int main()
{
    Con dc;
    Con pc(5);
    return 0;
}