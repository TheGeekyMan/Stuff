#include<iostream>
#include<sstream>
using namespace std;
class Student
{
    public:
    int id;
    string name;

    void insert()
    {
        cin>>id;
        cin>>name;
        //id = i;
        //name = n;
    }

    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main()
{
    Student s1,s2;
    // cin>>id;
    // cin>>name;
    s1.insert();
    s2.insert();
    s1.display();
    s2.display();
    return 0;
}