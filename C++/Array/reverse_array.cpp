#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"arr ["<<i<<"] : "<<arr[i]<<endl;//ordered array
    }
    cout<<"Reversed array is:\n";
    for(int i=(n-1);i>=0;i--)
    {
        cout<< arr[i]<<endl;//reverse of array
    }
}