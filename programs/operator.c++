#include <iostream>
using namespace std;

class date{
    int year;
    int month ;
    int day;

    public:
    void getdata();
    void display();
    friend date operator +(date &,date &);
    friend date operator -(date &,date &);
};
void date :: getdata()
{
    cout<<"enter data :";
    cout<<"\n year :";
    cin>>year;
    cout<<"\n month : ";
    cin>>month;
    cout<<"\n day :";
    cin>>day;
    cout<<endl;
    
}
void date :: display()
{
    cout<<"date = "<<year<<"/"<<month<<"/"<<day;
    cout<<endl;
}
date operator +(date &p,date &q)
{
    date temp;
    temp.day = p.day+q.day;
    temp.month = p.month + q.month + temp.day/30;
    temp.day = temp.day%60;
    temp.year = p.year + q.year+ temp.month /12;
    temp.month = temp.month%12;
    return temp;
}
date operator -(date &p,date &q)
{
    date temp;
    temp.day = p.day -q.day;
    temp.day = (p.month-q.month)*12+temp.day;
    temp.day = (p.year-q.year)*365+temp.day;
    temp.month =0; 
    temp.year =0;
    return temp;
}
int main()
{
    date x1,x2,x3,x4;
    x1.getdata();
    x2.getdata();
    x3 = x2+x1;
    x4 = x2-x1;
    x3.display();
    x4.display();

}