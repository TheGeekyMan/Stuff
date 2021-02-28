#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the number of elements that you want to add:\n";
    cin>>n;
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }


    cout<<"The largest element present in array is : ";
    for(int i=1;i<n;i++) 
    {
        if(arr[0]<arr[i])//largest
            arr[0] = arr[i];
    }
    cout<<arr[0]<<endl;


    cout<<"The smallest element present in array is : ";
    for(int i=1;i<n;i++)
    {
        if(arr[0]>arr[i])//smallest
            arr[0] = arr[i];
    }
    cout<<arr[0];
}