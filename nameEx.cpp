#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class NameC
{
    public:
    string fname, lname;
    void userInput()
    {
        cout<<"Enter your first number ";
        cin>>fname;
        cout<<"\nEnter your last name ";
        cin>>lname;
    }

    void doOperations()
    {
        string sc; 
        int sl;

        cout<<fname;
        cout<<lname;

         sc = strcat(fname, lname);
         sl = strlen(fname);

         cout<<sc;
         cout<<sl;


    }
};

int main()
{
    NameC n;
    n.userInput();
    n.doOperations();

    return 0;
}