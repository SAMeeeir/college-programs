#include<iostream>

using namespace std;

void divide(double a,double b)
{
    try
    {
        if (b==0.0) throw b;
        else cout<<"result ="<<a/b<<endl;
        
    }
    catch (double)
    {
        cout<<"exception in divide\n";
        throw;
    }
}

int main()
{
    try
    {
        divide(10.5,0.0);
        divide(5.5,0.0);
        
    }
    catch (int)
    {
        cout<<"exception in main(int)\n";
    }
    catch (double)
    {
        cout<<"exception in main(double)\n";
    }
    
}