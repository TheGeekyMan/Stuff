#include<iostream>
using namespace std;
int main()
{
    int n , min ,max;
    int arr[50];
    cout<<"Enter the no. of elements that you want to enter:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max = min = arr[0];
    cout<<"Original array elements are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
        if(max < arr[i])
        max = arr[i];
    }
    cout<<endl;
    cout<<max<<" is the largest element in the given array."<<endl;
    
    for(int i=0;i<n;i++)
    {
        if(min > arr[i])
        min = arr[i];
    }
    cout<<min<<" is the smallest element in the given array.";
}