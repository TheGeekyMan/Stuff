#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int num, num1;
    cin >> num;
    cin >> num1;
    int weekend = 2;
    int weekday = 5;

    int optimalHours = 7 * 8;
    int actualHours = weekday * num + weekend * num1;
        int solution = optimalHours - actualHours;
        if (solution > 0) {
            cout<< "You need " << solution << " hours more sleep to enjoy healthy life" <<"\nThank You!";

        }
        else if(solution = 56)
        {
            cout<< "You are enjoying you healthy life" << "\nThank You!";

        }
        else
        {
            cout<<"You need " << abs(solution) << " hours less sleep to enjoy healthy life" << "\nThank You!";

        }

}