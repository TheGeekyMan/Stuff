#include <iostream>
using namespace std;

int main()
{
int a, b, lcm;
cout << “\nEnter two numbers: “;
cin >> a >> b;

lcm = (a > b) ? a : b;

while(1)
{
if( lcm % a == 0 && lcm % b == 0 )
{
cout << “\nLCM of ” << a << ” and ” << b << ” is “<< lcm << endl;
break;
}
++lcm;
}
return 0;
}
//by recursion method
/*
// LCM of two numbers in C++

#include <iostream>
using namespace std;

int GCD(int a, int b)
{
if (a == 0 || b == 0)
return 0;

if (a == b)
return a;

if (a > b)
return GCD(a-b, b);
return GCD(a, b-a);
}

int LCM(int a, int b)
{
return (a*b)/GCD(a, b);
}

int main()
{
int a,b;
cout << “\nEnter two numbers : “;
cin >> a >> b;
cout << “\nLCM of ” << a << ” and ” << b << ” is ” << LCM(a,b);
return 0;
}


*/