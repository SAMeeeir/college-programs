#include <iostream>
#include <string.h>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

class person
{
public:
     string name;
     string citizenshipno;
     string gender;
     string age;
     string profession;
     float temperature;
     string address;
     string phoneno;
     string vaccinename;
     string date;

public:
     void getinformation();
     void conformation();
     void display();
      void savedata();
};
void person::getinformation()
{
     system("clear");
     cout << "\n \t\t\t\tENTER YOUR  DETIALS  \n";
     cout << endl
          << "NAME :";
     cin >> name;
     cout << endl
          << "CITIZENSHIP NO : ";
     cin >> citizenshipno;
     cout << endl
          << "AGE :";
     cin >> age;
     cout << endl
          << "GENDER (M FOR MALE AND F FOR FEMALE AND N FOR OTHERS) :";
     cin >> gender;

     cout << endl
          << "PROFESSION :";
     cin >> profession;
     cout << endl
          << "TEMPERATURE (IN DEGREE CELCIOUS):";
     cin >> temperature;
     cout << endl
          << "ADDRESS :";
     cin >> address;
     cout << endl
          << "CONTACT NO :";
     cin >> phoneno;

     cout << endl
          << "VACCINE NAME :";
     cin >> vaccinename;
     ;
     cout << endl
          << "VACCINATED DATE  ( EX : DAY-MONTH-YEAR) :";
     cin >> date;
}

void person::display()
{
     cout << "\n \t\t\t\t\t ENTERED DETIALS \n";
     cout << endl
          << "\t\t\tNAME :" << name;
     cout << endl
          << "\t\t\tCITIZENSHIP NO :" << citizenshipno;
     cout << endl
          << "\t\t\tAGE :" << age;
     cout << endl
          << "\t\t\tGENDER :" << gender;
     cout << endl
          << "\t\t\tPROFESSION :" << profession;
     cout << endl
          << "\t\t\tTEMPERATURE :" << temperature;
     cout << endl
          << "\t\tADDRESS :" << address;
     cout << endl
          << "\t\t\tCONTACT NO :" << phoneno;
     cout << endl
          << "\t\t\tVACCINE NAME :" << vaccinename;
     cout << endl
          << "\t\t\tVACCINATED DATE :" << date;
}
void person::conformation()
{
     system("clear");
     cout << "\n\n PLEASE CONFIRM YOUR DETIALS ";
     display();
     int b;
     char change;
     cout << endl
          << "\t\t\tIF YOU WANT TO CHANGE THE DETIALS ENTER 'y' ELSE ENTER ANY KEY. \n ";
     cout << "\n y/n : ";
     cin >> change;
     if (change == 'y' || change == 'Y')
     {
          cout << endl
               << "\t\t\tENTER THE NUMBER ASSOCIATED WITH DETIALS TO CHANGE : \n\n";
     here:
          cout << "\t\t\t\t1. NAME";
          cout << endl
               << "\t\t\t\t2. AGE";
          cout << endl
               << "\t\t\t\t3. CITIZENSHIP NO";
          cout << endl
               << "\t\t\t\t4. GENDER";
          cout << endl
               << "\t\t\t\t5. PROFESSION";
          cout << endl
               << "\t\t\t\t6. PERMANENT ADDRESS";
          cout << endl
               << "\t\t\t\t7. TEMPARARY ADDRESS";
          cout << endl
               << "\t\t\t\t8. CONTACT NO";
          cout << endl
               << "\t\t\t\t9. VACCINE NAME";
          cout << endl
               << "\t\t\t\t10. VACCINATED DATE";

          cout << " \n\n ENTER NUMBER :";
          cin >> b;
          cout << "\n \n";
          switch (b)
          {
          case 1:
               cout << "ENTER NAME :";
               cin >> name;
               break;
          case 2:
               cout << " ENTER AGE:";
               cin >> age;
               break;
          case 3:
               cout << " ENTER CITIZENSHIP NO:";
               cin >> citizenshipno;
               break;
          case 4:
               cout << " ENTER GENDER:";
               cin >> gender;
               break;
          case 5:
               cout << "ENTER PROFESSION :";
               cin >> profession;
               break;
          case 6:
               cout << "ENTER ADDRESS :";
               cin >> address;
               break;
          case 8:
               cout << "ENTER CONTACT NO :";
               cin >> phoneno;
               break;
          case 9:
               cout << "ENTER VACCINE NAME :";
               cin >> vaccinename;
               break;
          case 10:
               cout << "ENTER VACCINATED DATE :";
               cin >> date;
               break;
          default:
               cout << endl
                    << "PLEASE ENTER VALID NO. \n";
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
          else
          {
               system("clear");
               display();
          }
     }
     else
     {
          system("clear");
          display();
     }
}
void person :: savedata()
{
     char check;
     do
     {
          fstream fopen;
          fopen.open("data.txt", ios ::app | ios ::out);
           this->getinformation();
           this->conformation();
          fopen.write((char *)this, sizeof(person));
          cout << endl
               << "\n\n \t\t \tDATA IS SAVED ";
          fopen.close();
          cout << "\n\n \t\tDO YOU WANT TO ADD MORE DATA  (y/n) :";
          cin >> check;
          cout << endl;
     } while (check == 'y');
     fstream vaccine;
     vaccine.open("vaccinedata.txt", ios ::in);
     int a;
     while (vaccine.eof() == 0)
     {
          vaccine >> a;
     }
     a = a - 1;
     vaccine.close();
     fstream vaccineput;
     vaccineput.open("vaccinedata.txt", ios ::out);
     vaccineput << a;
     vaccineput.close();
}
void  filterbyage()
{
     string age;
     cout << "Enter age: ";
     cin >> age;
     ifstream file1;
     file1.open("data.txt",ios :: in);
     person d1;
     cout << "Name\t\t"
          << "Gender\t\t"
          << "Age\t\t"
          << "ID no.\t\t"
          << "Profession\t\t"
          << "Address\t\t"
          << "Vaccine Name\t\t"
          << "Phone Number\t\t"
          << "Vaccine Date\t\t";
     while(file1.eof() ==0)
     {
      file1.read((char *)&d1, sizeof(d1));
     // if (age.compare(d1.age) == 0)
     // {
          cout << d1.name << "\t\t"
               << d1.gender << "\t\t"
               << d1.age << "\t\t"
               << d1.tizenshipncio << "\t\t"
               << d1.profession << "\t\t"
               << d1.address << "\t\t"
               <<d1.temperature <<"\t\t"
               << d1.vaccinename << "\t\t"
               << d1.phoneno << "\t\t"
               << d1.date << "\t\t";
               break;
     //}
     }
}

// //void filter()
// {
//      cout << "Filter Data by:";
//      cout << "\t\t1.Profession";
//      cout << "\t\t2.Age";
//      cout << "\t\t3.Gender";
//      cout << "\t\t4.Name";
//      cout << "\t\t5.Citizenship Number";
//      int a;
//      cout << endl
//           << "\t\t\tENTER THE NUMBER ASSOCIATED WITH DETIALS TO CHANGE : \n\n";
//      cin >> a;
//      if (a == 2)
//      {
//           filterbyage();
//      }

//      // switch (a)
//      // {
//      // case 1:
//      //      filterbyprof();
//      //      break;
//      // case 2:
//      //      filterbyage();
//      //      break;
//      // case 3:
//      //      filterbygender();
//      //      break;
//      // case 4:
//      //      filterbyname();
//      //      break;
//      // case 5:
//      //      filterbycitizenship();
//      //      break;
//      // default:
//      //      break;
//      // }
// }

int main()
{
   person x;
   x.savedata();
   filterbyage();
}