#include<iostream>
using namespace std;

class Employee
{
    public:
    Employee()
    {
        cout<<"This is default constructor"<<endl;
    }
};
int main()
{
    Employee e;
    return 0;
}