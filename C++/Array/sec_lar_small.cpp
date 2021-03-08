#include<iostream>
using namespace std;
int main()
{
    int n,max,temp;
    int arr[50];
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    //     max = arr[0];
    // cout << "The original array is :" << endl;
    // for (int i = 0; i < n;i++)
    // {
    //     if(max < arr[i])
    //         max = arr[i];
    //     cout <<arr[i]<<" ";
    // }

    // cout << "\n"<<max;


    for (int i = 0; i < n;i++)
    {
        for (int j = i+1; j < n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After sorting:" << endl;
    for (int i = 0; i < n;i++)
    {
        cout <<arr[i]<< " ";
    }
}