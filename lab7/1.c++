#include <iostream>
using namespace std;

class course{
   int  totalseats = 300;
   int course =3;
   public :
   void display();
   void  enrolled();
};
class mathematics : public course{
    int totalseats = 100;
    int enrolled = 65;

    public:
    
    void display();
};
class science : public course{
    int totalseats = 100;
    int enrolled =70;

    public:
    void display();
};
class engineering : public course{
    int totalseats = 100;
    int enrolled = 80;
    public :
    void display();
};
class physics : public science{
   int totalseats = 50;
    int enrolled =40;
    public :
    void display();
};
class chemistry : public science{
    int totalseats = 50;
    int enrolled = 45;
    public :
    void display();
};
void course :: display(){
    cout<<"total no of courses avaiable are :"<<course;
    cout<<endl<<"total no of avaiable seats are :"<<totalseats;
    cout<<endl;
}
void mathematics :: display()
{  cout<<endl<<"             MATH ";
   cout<<endl<<"total no of avaiable seats are :"<<totalseats;
    cout<<endl<<"total no of stundents enrolled :"<<enrolled;
}
void science :: display()
{    cout<<endl<<"            SCIENCE";
   cout<<endl<<"total no of avaiable seats are :"<<totalseats;
    cout<<endl<<"total no of stundents enrolled :"<<enrolled;
    cout<<endl<<"we have two facality in science (physcis ,chemsitry)";
}
void  engineering :: display()
{    cout<<endl<<"            ENGINEERING";
   cout<<endl<<"total no of avaiable seats are :"<<totalseats;
    cout<<endl<<"total no of stundents enrolled :"<<enrolled;
}
void physics :: display()
{    cout<<endl<<"            PHYSICS";
   cout<<endl<<"total no of avaiable seats are :"<<totalseats;
    cout<<endl<<"total no of stundents enrolled :"<<enrolled;
}void  chemistry :: display()
{  cout<<endl<<"            CHEMISTRY";
   cout<<endl<<"total no of avaiable seats are :"<<totalseats;
    cout<<endl<<"total no of stundents enrolled :"<<enrolled;
}

int main()
{
    mathematics p;
    engineering q;
    physics r;
    chemistry s;
    p.course :: display();
    p.display();
    q.display();
    r.science :: display();
    r.display();
    s.display();

}