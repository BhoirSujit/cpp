#include<iostream>
using namespace std;

class Data
{
    private: char name[20];
    private: int age;

    public: void setAge(int nage)
    {
        age = nage;
    }

    public: int getAge()
    {
        return age;
    }
};

int main()
{
    Data data;
    data.setAge(17);
    int nage = data.getAge();
    cout<<"Age : "<<nage;
    return 0;
}