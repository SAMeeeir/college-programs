#include <iostream>
using namespace std;

class complex{
    int x;
    int y;
    public:
    complex(){}
    complex(int x,int y)
    {
        this ->x = x;
        this ->y = y;
    }
    void display();
    complex operator +(complex);
};

void complex :: display()
{
    cout<<x<<endl<<y;
}

complex complex :: operator +(complex s)
{
   complex temp;
   temp.x = x + s.x;
   temp.y = y + s.y;
   return temp;
}

int main()
{
    complex a(5,6);
    a.display();
    complex b(7,8);
    b.display();
     complex c;
     c = a+b;
     c.display();
}