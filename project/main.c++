#include <iostream>
#include <fstream>
#include <cstring>
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
    cout<<"PLEASE CONFIRM YOUR DETIALS ";
    display();
    int b;
    char change;   
    cout<<endl<<"IF YOU WANT TO CHANGE THE DETIALS ENTER y ELSE ENTER ANY KEY. \n ";
    cout<<"\n y/n : ";
    cin>>change;
    if(change == 'y')
    {
     cout<<endl<<"ENTER THE NUMBER ASSOCIATED WITH DETIALS TO CHANGE : \n\n";
    here:
    cout<<"1. NAME";
    cout<<endl<<"2. AGE";
    cout<<endl<<"3. CITIZENSHIP NO";
    cout<<endl<<"4. GENDER";
    cout<<endl<<"5. PROFESSION";
    cout<<endl<<"6. PERMANENT ADDRESS";
    cout<<endl<<"7. TEMPARARY ADDRESS";
    cout<<endl<<"8. CONTACT NO";
    cout<<endl<<"9. VACCINE NAME";
    cout<<endl<<"10. VACCINATED DATE";
    cout<<endl<<"11. DISEASES";
    
    cout<<" \n\n ENTER NUMBER :";
    cin>>b;
    cout<<"\n \n";
    switch(b)
    {
        case 1 :
            cout<<"ENTER NAME :";
            cin>>ws;
            cin.getline(name,50);
            break;
        case 2 :
            cout<<" ENTER AGE:";
            cin>>age;
            break;
        case 3 :
            cout<<" ENTER CITIZENSHIP NO:";
            cin>>ws;
            cin.getline(citizenshipno,50);
            break;
        case 4 :
            cout<<" ENTER GENDER:";
            cin.getline(gender,50);
            break;
        case 5 :
            cout<<"ENTER PROFESSION :";
            getline(cin>>ws,profession);
            break;
        case 6 :
            cout<<"ENTER PERMANENT ADDRESS :";
            getline(cin>>ws,paddress);
            break;
        case 7 :
            cout<<"ENTER TEMPARARY ADDRESS :";
            cin>>ws;
            cin.getline(taddress,50);
            break;
        case  8:
            cout<<"ENTER CONTACT NO :";
            cin>>phoneno;
            break;
        case  9:
            cout<<"ENTER VACCINE NAME :";
            getline(cin>>ws,vaccinename);
            break;
        case  10:
            cout<<"ENTER VACCINATED DATE :";
            cin>>ws;
            cin.getline(date,50);
            break;
        case  11:
            cout<<"ENTER ANY PERMANENT DISEASES IF YOU HAVE :";
            cin>>ws;
            cin.getline(diseases,50);
            break;
        default :
        cout<<endl<<"PLEASE ENTER VALID NO. \n";

    }
    display();
     char yesorno;
    cout<<"\n DO YOU WANT TO EDIT DETIALS .\n";
    cout<<"y/n";
    cin.get(yesorno);
    char d ='y';
    if(yesorno ==d)
    {
        goto here;
    }
    else{
        display();
    }
    }
}

int main()
{
    person x;
    x.getinformation();
    x.conformation();
}