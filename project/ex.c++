#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fileout;
    fileout.open("item.txt,ios :: app");
    int p = fileout.tellp();
    cout<<p;
}