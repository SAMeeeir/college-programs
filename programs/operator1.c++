#include <iostream>
#include <math.h>
using namespace std;

class complex{
    int real;
    int imag;
    float mag;
    public:
    complex()
    {
        real =0; imag =0; mag =0;
    }
    complex(int a,int b)
    {
        real = a;
        imag = b;
    }
    friend float operator >(complex &,complex&);
    friend float operator <(complex &,complex &);
    //friend float operator =(complex &,complex &);
};
float operator >(complex &p,complex &q)
{
    
    p.mag = sqrt(p.real*p.real +p.imag*p.imag);
    q.mag = sqrt(q.real*q.real +q.imag*q.imag);
    return((p.mag>q.mag)?true:false);
}
float operator <(complex &p,complex &q)
{
  
    p.mag = sqrt(p.real*p.real +p.imag*p.imag);
    q.mag = sqrt(q.real*q.real +q.imag*q.imag);
    return((p.mag<q.mag)?true:false);
}
float operator =(complex &p,complex &q)
{
    float temp;
    p.mag = sqrt(p.real*p.real +p.imag*p.imag);
    q.mag = sqrt(q.real*q.real +q.imag*q.imag);
    return((p.mag=q.mag)?true:false);
}

int main()
{
    complex x1(3,4);
    complex x2(4,5);
    if(x2>x1)
    {
        cout<<"ture";
    }
}