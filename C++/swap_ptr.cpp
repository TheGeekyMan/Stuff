#include<iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 10;
    int *p1=&a , *p2=&b;
    cout<<"Before swapping *p1 and *p2 : "<<*p1<<" And "<<*p2<<" resp"<<endl;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout<<"Ater swapping *p1 and *p2 :"<<*p1<<" And "<<*p2<<" resp"<<endl;
    return 0;
}