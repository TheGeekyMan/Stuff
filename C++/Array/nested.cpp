#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[50];
    cout<<"Enter the number of students:\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[j];
        }
    }
    cout<<"Entered marks are:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[j]<<"\t";
        }
    }
}