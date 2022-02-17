#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{  
    char a[50];
    here:
    cin>>a;

    if(a =="samir")
    {
        goto here;
    }
}