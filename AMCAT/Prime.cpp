#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number:\n";
    cin>>n;
    for( i=2;i<=n/2;i++)
    {
        if(n % i ==0)
        {
            break;
        }
    }
    if(i>n/2)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
    }
