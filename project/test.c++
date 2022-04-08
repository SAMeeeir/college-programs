#include <iostream>
#include <fstream>
using namespace std;

class person
{
public:
  int vaccine = 200;
  string name;
  int age;
  string gender;
  string vaccinedate;
  string vaccinetype;
  string profession;
  string address;
  string phonenumber;
  string citizenship;

public:
  void getinformation();
  void savedata();
  void display1();
  void edit1();
};

void person::getinformation()
{
  cout << "Name:";
  cin >> name;
  cout << "Age:";
  cin >> age;
  // cout << "Profession: ";
  // cin >> profession;
}
void person::savedata()
{
  char check;
  ofstream file;
  file.open("Input.txt", ios::app);
  do
  {
    getinformation();
    file.write((char *)this, sizeof(person));
    display1();
    cout << "\nDo you want to edit data (y/n): ";
    cin >> check;
    if (check == 'y')
    {
      edit1();
    };
    cout << "\nDo you want to enter more data(y/n): ";
    cin >> check;
  } while (check == 'y');
  file.close();
}

void person::edit1()
{
  cout << "\t\t1.Name" << endl;
  cout << "\t\t2.Profession";
  cout << "\t\t3.Age";
  cout << "\t\t4.Gender";
  cout << "\t\t5.Address";
  cout << "\t\t6.Citizenship Number";
  cout << "\t\t7.Vaccine Type";
  cout << "\t\t8.Vaccine Date";
  int a;
  cout << "\t\t\tENTER THE NUMBER ASSOCIATED WITH DETAILS TO CHANGE : \n\n";
  cin >> a;
  switch (a)
  {
  case 1:
    cout << "Name: ";
    cin >> this->name;
    break;
  default:
    break;
  }
};
void person::display1()
{
  cout << "\nYour Entered data is: \n\n";
  cout << "\tName: " << this->name << endl;
  cout << "\tAge: " << this->age << endl;
}
void filterbyage()
{
  person d1;
  ifstream file1;
  file1.open("Input.txt");
  while (!file1.eof())
  {
    file1.read((char *)&d1, sizeof(d1));
    cout << d1.name << endl;
  }
  file1.close();
}
void filter()
{
  system("clear");
  cout << "Filter Data by:";
  cout << "\t\t1.Profession";
  cout << "\t\t2.Age";
  cout << "\t\t3.Gender";
  cout << "\t\t4.Name";
  cout << "\t\t5.Citizenship Number";
  int a;
  cout << endl
       << "\t\t\tENTER THE NUMBER ASSOCIATED WITH DETIALS TO CHANGE : \n\n";
  cin >> a;
  if (a == 2)
  {
    filterbyage();
  }

  // switch (a)
  // {
  // case 1:
  //      filterbyprof();
  //      break;
  // case 2:
  //      filterbyage();
  //      break;
  // case 3:
  //      filterbygender();
  //      break;
  // case 4:
  //      filterbyname();
  //      break;
  // case 5:
  //      filterbycitizenship();
  //      break;
  // default:
  //      break;
  // }
}

int main()
{
  person p1;
  int a;
  cout << "1.Add Vaccine" << endl;
  cout << "2. Add Information" << endl;
  cout << "3. See Available No Of Vaccine" << endl;
  cout << "4. Search Data" << endl;
  cout << "Select a option: " << endl;
  cin >> a;
  switch (a)
  {
  case 1:
    p1.getinformation();
    break;
  case 3:
    filter();
    break;
  default:
    break;
  }
  p1.savedata();
  filterbyage();
  return 0;
}