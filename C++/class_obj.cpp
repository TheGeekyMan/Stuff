
#include<iostream>
#include<sstream>
using namespace std;

class First{
    public:
    int age;
    string name;
};

int main()
{
    First f;
    f.age = 22;
    f.name= "Onkar Kulkarni";
    cout<<f.age<<"\n"<<f.name<<endl;
return 0;
}