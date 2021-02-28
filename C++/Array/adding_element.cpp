#include <iostream>
using namespace std;
int main()
{
    int n, pos, element;
    int arr[50];
    cout << "Enter the number of elements that you want to add:\n";
    cin >> n;
    cout << "Enter the element of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original array is:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element present at index"
             << "[" << i << "]"
             << " : " << arr[i] << endl;
    }
    cout << "Enter the position that you want to add new element:\n";
    cin >> pos;
    cout << "Enter the new element:\n";
    cin >> element;
    // for (int i = 0; i < n + 1; i++)
    // {

    // }
}
