#include<iostream>
using namespace std;
int main()
{
    int n,res=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        res = res + arr[i];
    }
    cout<<res;
}