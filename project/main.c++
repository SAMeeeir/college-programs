#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

class person {
    char  name[50];
    char citizenshipno[30];
    char gender[10];
    int age;
    char profession[50];
    float temperature;
    char diseases[100];
    char paddress[50];
    char taddress[100];
    char phoneno[30];
    char vaccinename[50];
    char date[30];

public:
    void getinformation();
    void conformation();
    void display();
    void savedata();
    void view_all();
    void show();

};
void person::getinformation()
{   system("clear");
    cout << "\n \t\t\t\tENTER YOUR  DETIALS  \n";
    cout << endl << "NAME :";
    cin.getline(name, 50);
    cout << endl << "CITIZENSHIP NO : ";
    cin >> citizenshipno;
    cout << endl << "AGE :";
    cin >> age;
    cout << endl << "GENDER (M FOR MALE AND F FOR FEMALE AND N FOR OTHERS) :";
    cin >> gender;
    cout << endl << "PROFESSION :";
    cin >> ws;
    cin.getline(profession, 50);
    cout << endl << "TEMPERATURE (IN DEGREE CELCIOUS):";
    cin >> temperature;
    cout << endl << "PERMANENT ADDRESS( EX : VDC-WARD NO-DISTRICT) :";
    cin >> ws;
    cin.getline(paddress,50);
    cout << endl << "TEMPERARY ADDRESS(EX :VDC-WARD NO -DISTRICT) :";
    cin.getline(taddress, 100);
    cout << endl << "CONTACT NO :";
    cin.getline(phoneno,30);
    cout << endl << "VACCINE NAME :";
    cin >> ws;
    cin.getline(vaccinename, 50);
    cout << endl << "VACCINATED DATE  ( EX : DAY-MONTH-YEAR) :";
    cin >> ws;
    cin.getline(date, 30);
    cout << endl << "MENTION ANY PERMANENT DISEASES IF YOU HAVE :";
    cin >> ws;
    cin.getline(diseases, 100);

}

void person::display()
{  
    cout << "\n \t\t\t\t\t ENTERED DETIALS \n";
    cout << endl << "\t\t\tNAME :" << name;
    cout << endl << "\t\t\tCITIZENSHIP NO :" << citizenshipno;
    cout << endl << "\t\t\tAGE :" << age;
    cout << endl << "\t\t\tGENDER :" << gender;
    cout << endl << "\t\t\tPROFESSION :" << profession;
    cout << endl << "\t\t\tTEMPERATURE :" << temperature;
    cout << endl << "\t\t\tPERMANENT ADDRESS :" << paddress;
    cout << endl << "\t\t\tTEMPERARY ADDRESS :" << taddress;
    cout << endl << "\t\t\tCONTACT NO :" << phoneno;
    cout << endl << "\t\t\tVACCINE NAME :" << vaccinename;
    cout << endl << "\t\t\tVACCINATED DATE :" << date;
    cout << endl << "\t\t\tDISEASES :" << diseases;

}
void person::conformation()
{   system("clear");
    cout << "\n\n PLEASE CONFIRM YOUR DETIALS ";
    display();
    int b;
    char change;
    cout << endl << "\t\t\tIF YOU WANT TO CHANGE THE DETIALS ENTER y ELSE ENTER ANY KEY. \n ";
    cout << "\n y/n : ";
    cin >> change;
    if (change == 'y' || change =='Y')
    {
        cout << endl << "\t\t\tENTER THE NUMBER ASSOCIATED WITH DETIALS TO CHANGE : \n\n";
    here:
        cout << "\t\t\t\t1. NAME";
        cout << endl << "\t\t\t\t2. AGE";
        cout << endl << "\t\t\t\t3. CITIZENSHIP NO";
        cout << endl << "\t\t\t\t4. GENDER";
        cout << endl << "\t\t\t\t5. PROFESSION";
        cout << endl << "\t\t\t\t6. PERMANENT ADDRESS";
        cout << endl << "\t\t\t\t7. TEMPARARY ADDRESS";
        cout << endl << "\t\t\t\t8. CONTACT NO";
        cout << endl << "\t\t\t\t9. VACCINE NAME";
        cout << endl << "\t\t\t\t10. VACCINATED DATE";
        cout << endl << "\t\t\t\t11. DISEASES";

        cout << " \n\n ENTER NUMBER :";
        cin >> b;
        cout << "\n \n";
        switch (b)
        {
        case 1:
            cout << "ENTER NAME :";
            cin >> ws;
            cin.getline(name, 50);
            break;
        case 2:
            cout << " ENTER AGE:";
            cin >> age;
            break;
        case 3:
            cout << " ENTER CITIZENSHIP NO:";
            cin >> ws;
            cin.getline(citizenshipno, 50);
            break;
        case 4:
            cout << " ENTER GENDER:";
            cin.getline(gender, 50);
            break;
        case 5:
            cout << "ENTER PROFESSION :";
            cin>>ws;
            cin.getline(profession, 50);
            break;
        case 6:
            cout << "ENTER PERMANENT ADDRESS :";
            cin>>ws;
            cin.getline(paddress, 50);
            break;
        case 7:
            cout << "ENTER TEMPARARY ADDRESS :";
            cin >> ws;
            cin.getline(taddress, 50);
            break;
        case  8:
            cout << "ENTER CONTACT NO :";
            cin >> phoneno;
            break;
        case  9:
            cout << "ENTER VACCINE NAME :";
            cin >> ws;
            cin.getline(vaccinename, 50);
            break;
        case  10:
            cout << "ENTER VACCINATED DATE :";
            cin >> ws;
            cin.getline(date, 50);
            break;
        case  11:
            cout << "ENTER ANY PERMANENT DISEASES IF YOU HAVE :";
            cin >> ws;
            cin.getline(diseases, 50);
            break;
        default:
            cout << endl << "PLEASE ENTER VALID NO. \n";

        }
        display();
        char yesorno;
        cout << "\n DO YOU WANT TO EDIT DETIALS .\n";
        cout << "y/n";
        cin.get(yesorno);
        char d = 'y';
        if (yesorno == d)
        {
            goto here;
        }
        else {
            system("clear");
            display();
        }
    }else{
        system("clear");
        display();
    }
}
void person::savedata()
{  
    fstream fopen;
    fopen.open("data.txt",ios :: app | ios ::out);
    getinformation();
    conformation();
    fopen.write((char*)this, sizeof(person));
    cout << endl << "\n\n \t\t \tDATA IS SAVED ";
    fopen.close();
    fstream vaccine; 
    vaccine.open("vaccinedata.txt",ios :: in);
    int a;
    while(vaccine.eof() ==0)
    {
       vaccine>>a;
    }
    a = a-1;
    vaccine.close();
    fstream vaccineput;
    vaccineput.open("vaccinedata.txt",ios :: out);
    vaccineput<<a;
    vaccineput.close();

}


int main()
{
    person x;
    x.savedata();
  
}