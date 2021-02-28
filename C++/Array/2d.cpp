#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[50][50];
    cout << "Enter the number of student who gave the test:\n";
    cin >> n;

    cout << "Enter the marks seperated bt space:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The array is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "\t"
                 << "a [" << i << "]"
                 << "[" << j << "]" << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[0][5] = 0;
            cout << arr[i][j];
        }
    }
}