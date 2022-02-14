#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student{
   string a;
    int b;
    int c ;
    string  d;
  public:
    void getdata();
    void display();
}; 
void student :: getdata()
{  student x;

   
    cout<<"enter your name" ;
    cin>>x.a;
    cout<<endl<<"enter your age :";
    cin>>x.b;
    cout<<endl<<"enter your rollno :";
    cin>>x.c;
    cout<<endl<<"enter your address :";
    cin>>x.d;
    
    ofstream file;
    file.open("myfile.txt",ios :: out); 
    file<<"NAME :"<<x.a;
    file<<"\nrollno :"<<x.b;
    file<<"\nage :"<<x.c;
    file<<"\naddress :"<<x.d;
    
    file.close();
} 
void student ::display()
{
    student y;
    ifstream fileread;
    fileread.open("myfile.txt");
    while(getline(fileread,y.a))
    {
        
        cout<<y.a;
    }

}    
int main()
{
  student f;
  f.getdata();
  f.display();
}