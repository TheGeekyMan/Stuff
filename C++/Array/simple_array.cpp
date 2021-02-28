#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the number of elements that yo are going to add:\n";
    cin>>n;
    cout<<"Enter the elements one by one:\n";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The elements of Array are :\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}