#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the number of elements of array:\n";
    cin>>n;
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   //cout<<"The elements of the array are :\n";
    for(int i=0;i<n;i++)
    {
        cout<<"The element at index arr["<<i<<"] is : "<<arr[i]<<endl;   
    }
}