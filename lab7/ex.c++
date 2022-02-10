#include <iostream>
using namespace std;

class student{
   string name;
   int rollno;

   public:
   void getinfo();
   void display();
};

class test: public student{
    float phy,chem,math,eng,total;

    public:
    void getdata();
    void display();
    float totalmarks();
};
class result : public test{
    float totalmark;
    float percentage;

    public:
    void calculatedata();
    void display();
};

void student :: getinfo()
{
    cout<<"enter name :";
    cin>>name;
    cout<<endl<<"enter rollno :";
    cin>>rollno;
    cout<<endl;
}
void student :: display()
{
   cout<<" NAME :"<<name;
   cout<<endl<<"ROLL NO :"<<rollno;
   cout<<endl;
}

void test :: getdata()
{
    cout<<"enter marks :"<<endl;
    cout<<"PHYSICS :";
    cin>>phy;
    cout<<endl <<"MATH :";
    cin>>math;
    cout<<endl<<"CHEMiSTRY :";
    cin>>chem;
    cout<<endl<<"ENGLISH :";
    cin>>eng;
    cout<<endl;
}
void  test :: display()
{   cout<<endl<<"MARKS OBTAINED :";
    cout<<"PHYSICS :" <<phy;
    cout<<endl <<"MATH :"<<math;
    cout<<endl<<"CHEMiSTRY :"<<chem;
    cout<<endl<<"ENGLISH :"<<eng;
    cout<<endl;
}
float test :: totalmarks()
{
   total = phy+chem+eng+math;
   return total;
}
void result :: calculatedata()
{
    totalmark = totalmarks();
    percentage = totalmark *100 /400;

}
void result :: display()
{
    cout<<"TOTAL MARKS :"<<totalmark;
    cout<<endl;
    cout<<"PERCENTAGE :"<<percentage<<"%s";
    cout<<endl;
}

int main()
{
    result s;
    s.getinfo();
    s.getdata();
    s.student :: display();
    s.test :: display();
    s.calculatedata();
    s.display();
}