#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Counting even numbers" << endl;
            count++;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "This is counting program" << endl;
    //     count++;
    // }
    cout << count;
    return 0;
}