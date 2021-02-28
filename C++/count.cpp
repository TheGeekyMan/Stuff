#include<iostream>
using namespace std;

int largest(int n ,int arr[])
{
    int max = arr[0];
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>max)
        max = arr[i];

        return max;
        
    }
    return 0;
}


int main()
{
    int n;
    int arr[n];
    int m = sizeof(arr) / sizeof(arr[0]);
    
    //cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<largest(arr,m);
    }
    return 0;

}