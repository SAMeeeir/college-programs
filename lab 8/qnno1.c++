//Overload << and >> operators to use an object in insertion and extraction expression

#include <iostream>
using namespace std;

class person{
    int name;
    int a;
    public:
    friend istream operator >>(istream &k,person &l) ;
    friend ostream operator <<(ostream &k,person &l);
};
ostream operator <<(ostream &k,person &l)
{   k<<" \ndetials are :\n";
     k<<"name "<<l.name;
     k<<endl<<"age :"<<l.a;
     return k;
}

istream operator >>(istream &s,person &t)
{
    cout<<"enter name :";
    s>>t.name;
    cout<<"\n enter age :";
    s>>t.a;
    return s;
}   
int main()
{
    person a;
    cin>>a;
    cout<<a;
    return 0;
}