#include<iostream>
#include<sstream>
using namespace std;

class Employee{
    public:
    int id;
    string name;

    Employee(int i , string n ){
        id = i;
        name = n;
    }
    // void insert(int i, string n){
    //     cin>>id>>endl;
    //     cin>>name>>endl;
    // }
    void display()
    {
        cout<<id<<" "<<name;
    }
};
int main()
{
    Employee e1 = Employee(101,"Onkar");
    //cin>>e.id;// = 101;
    //cin>>e.name;// = "Onkar";
    //e.insert();
    e1  .display();
    return 0;
}