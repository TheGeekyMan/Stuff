//program for taking last -ve number and end of taking input , returning length of output number
#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int n, i, b;
    cout << "Enter the number of elements that you want to add:\n";
    cin >> n;
    cout << "Enter the elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            break;
    }
    cout << "Original array is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}