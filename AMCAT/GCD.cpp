#include<iostream>
using namespace std;
int main()
{
int a,b,gcd;
cout <<“\nEnter two numbers : “;
cin >> a >> b;
int i;
for(i = 1; i <= a && i <= b; i++)
{
if((a % i == 0) && (b % i == 0))
{
gcd = i;
}
}
cout << “\nGCD of “<< a << ” and ” << b << ” is ” << gcd;
cout << endl;
return 0;
}
//by recursion method
/*
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
if (b != 0)
return gcd(b, a % b);
else
return a;
}

int main()
{
int a, b;
cout << “Enter two numbers: “;
cin >> a >> b;
cout << “\nGCD of ” << a << ” and ” << b << ” is ” << gcd(a,b);
cout << endl;
return 0;
}
*/