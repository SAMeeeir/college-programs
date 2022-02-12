#include <iostream>
using namespace std;

int main()
{
   int *ptr ,**a,b;
   b=5;
   ptr = &b;
   a = &ptr;
   cout<<a;
   cout<<endl;
   cout<<&ptr;
   cout<<endl;
   cout<<*ptr;
   cout<<endl;
   cout<<&a;

}