#include<iostream>
using namespace std;

class Square{
    public:
    int n;

    Square(){ //default constr
        n=5;
    }

    void display()
    {
        cout<<"Square is :"<<n*n<<endl;
    }
};


 class Area{ //class
     public:
     int l ,b;

     Area(int len , int brea){ //para constr
         l = len;
         b = brea;
     }
     int Calculate(){
         cout<<"Area is :"<<l*b<<endl; //will return l*b
         return 0;
     }
 };
 int main()
 {
     Area a = Area(10,10);
    Square s;
    s.n = 5;
    s.display();//method of default constr
    a.Calculate(); //method of para constr
    return 0;

 }