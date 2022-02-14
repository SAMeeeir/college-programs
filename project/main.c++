#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class person{
   char  name[50];
   char citizenshipno[30];
   char gender[10];
   int age;
   string profession;
   float temperature;
   char diseases[100];
   string paddress;
   char taddress[100];
   long int phoneno;
   string vaccinename;
   char date[30];

   public:
   void getinformation();
   void conformation();
   void display();

};
void person :: getinformation()
{  
    
   cout<<"\n ENTER DETIALS  \n";
   cout<<endl<<"NAME :";
   cin.getline(name,50);
   cout<<endl<<"CITIZENSHIP NO : ";
   cin>>citizenshipno;
   cout<<endl<<"AGE :";
   cin>>age;
   cout<<endl<<"GENDER (M FOR MALE AND F FOR FEMALE AND N FOR OTHERS) :";
   cin>>gender;
   cout<<endl<<"PROFESSION :";
   getline(cin>>ws,profession);
   cout<<endl<<"TEMPERATURE (IN DEGREE CELCIOUS):";
   cin>>temperature;
   cout<<endl<<"PERMANENT ADDRESS( EX : VDC-WARD NO-DISTRICT) :";
   getline(cin>>ws,paddress);
   cout<<endl<<"TEMPERARY ADDRESS(EX :VDC-WARD NO -DISTRICT) :";
   cin.getline(taddress,100);
   cout<<endl<<"CONTACT NO :";
   cin>>phoneno;
   cout<<endl<<"VACCINE NAME :";
   getline(cin>>ws,vaccinename);
   cout<<endl<<"VACCINATED DATE  ( EX : DAY-MONTH-YEAR) :";
   cin.getline(date,30);
   cout<<endl<<"MENTION ANY PERMANENT DISEASES IF YOU HAVE :";
   cin.getline(diseases,100);
   
}

void person :: display()
{
    cout<<"\n ENTERED DETIALS \n";
    cout<<endl<<"NAME :"<<name;
    cout<<endl<<"CITIZENSHIP NO :"<<citizenshipno;
    cout<<endl<<"AGE :"<<age;;
    cout<<endl<<"GENDER :"<<gender;
    cout<<endl<<"PROFESSION :"<<profession;
    cout<<endl<<"TEMPERATURE :"<<temperature;
    cout<<endl<<"PERMANENT ADDRESS :"<<paddress;
    cout<<endl<<"TEMPERARY ADDRESS :"<<taddress;
    cout<<endl<<"CONTACT NO :"<<phoneno;
    cout<<endl<<"VACCINE NAME :"<<vaccinename;
    cout<<endl<<"VACCINATED DATE :"<<date;
    cout<<endl<<"DISEASES :"<<diseases;

}
void person :: conformation()
{
    
}

int main()
{
    person x;
    x.getinformation();
    x.display();
}