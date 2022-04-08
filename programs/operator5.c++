#include <iostream>
using namespace std;

class complex{
    int real;
    int imag;
    public:
    friend istream &operator >>(istream &,complex &);
    friend ostream &operator <<(ostream &,complex &);
};
ostream &operator <<(ostream &p,complex &q){
    p<<"complex number is :"<<q.real<< "+ i"<<q.imag;
    return p;
    
}
 istream &operator >>(istream &p,complex &q){
    cout<<"enter complex number :";
    p>>q.real;
    cout<<endl;
    p>>q.imag;
    return p;
}
int main()
{
    complex s;
    cin>>s;
    cout<<s;
}
