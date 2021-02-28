#include<iostream>
using namespace std;
int main()
{
    int a;
    
    a = 20;
    int* b;
    b = &a;
    //b = 20;
    cout<<"The address of A :"<<&a<<endl;
    cout<<"The address of B :"<<b<<endl;
    cout<<"The value of A "<<a<<endl;
    cout<<"the value of B is"<<*b<<endl;
    return 0;

}

