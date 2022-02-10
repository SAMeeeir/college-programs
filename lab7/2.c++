#include <iostream>
using namespace std;

class student{
  string name;
  int rollno;

  public:
  student();
  student(string,int);
  void display();
  ~student()
  {   
      cout<<"student desturcted";
      
  }
};
class marks : public student{
   float totalmarks;
   float percentage;
   public:
   marks(float,float,string,int) ;
   void display();
   ~marks()
   {  
       cout<<"\n marks distructed";
   }
};

student :: student(string a, int b){
    name = a;
    rollno = b;
}
void student :: display()
{
    cout<<endl<<"NAME :"<<name;
    cout<<endl<<"ROLL NO :"<<rollno;
    cout<<endl;
}
marks :: marks(float a,float b,string c,int d): student(c,d)
{   
    totalmarks =a;
    percentage = b;  
}
void marks :: display(){
    cout<<endl<<"TOTALMARKS :"<<totalmarks;
    cout<<endl<<"PERCENTAGE :"<<percentage;
    cout<<endl;
}
int main()
{
    marks s(50,50,"samir",5);
    s.student :: display();
    s.display();



}