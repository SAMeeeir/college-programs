#include <iostream>
#include <fstream>
using namespace std;

void mainmenu();
class person
{
public:
  char name[50];
  string age;
  string gender;
  string profession;
  string address;
  string phonenumber;
  string citizenship;
  string vaccinedate;

public:
  void getinformation();
  void friend savedata();
  void display1();
  void edit1();
};

// get information about person
void person::getinformation()
{
  cout << "\n\nName:";
  cin >> ws;
  cin.getline(name, 50);
  cout << "\nAge:";
  cin >> age;
  cout << "\nGender(m/f/0):";
  cin >> gender;
  cout << "\nCitizenship No:";
  cin >> citizenship;
  cout << "\nProfession:";
  cin >> profession;
  cout << "\nAddress:";
  cin >> address;
  cout << "\nPhone Number:";
  cin >> phonenumber;
  cout << "\nVaccine Date(D-M-Y)";
  cin >> vaccinedate;
}
//decrease vaccine number after adding data
void vaccinedec()
{
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

// savedata to file
void savedata()
{
  person p;
  char check;
  ofstream file;
  file.open("Input.txt", ios::app);
  do
  {
    p.getinformation();
    p.edit1();
    file.write((char *)&p, sizeof(person));
    p.display1();
    cout << "\nDo you want to enter more data(y/n): ";
    cin >> check;
    vaccinedec();
  } while (check == 'y');
  file.close();
  mainmenu();
}

// edit the data if you want to
void person::edit1()
{  
  char check;
  cout<<"\n\n please confirm your detials.\n\n";
  this->display1();
  cout<<"\n\n do you want to change detials (y/n) :";
  cin>>check;
  if(check =='y')
  {
  do{
  cout << "\t\t1.Name" << endl;
  cout << "\t\t2.Profession\n";
  cout << "\t\t3.Age\n";
  cout << "\t\t4.Gender\n";
  cout << "\t\t5.Address\n";
  cout << "\t\t6.Citizenship Number\n";
  cout << "\t\t7.Vaccine Date\n";
  int a;
  cout << "\t\t\tENTER THE NUMBER ASSOCIATED WITH DETAILS TO CHANGE : \n\n";
  cin >> a;
  switch (a)
  {
  case 1:
    cout<<"enter name :";
    cin>>ws;
    cin.getline(name,30);
    break;
    case 2:
    cout<<"enter profession :";
    cin>>profession;
    break;
    case 3:
    cout<<"enter age :";
    cin>>age;
    break;
    case 4:
    cout<<"enter gender :";
    cin>>gender;
    break;
    case 5:
    cout<<"enter address :";
    cin>>address;
    break;
    case 6:
    cout<<"enter citizenship number :";
    cin>>citizenship;
    break;
    case 7:
    cout<<"enter vaccine data :";
    cin>>vaccinedate;
    break;
    default:
    cout<<"please enter valid number ";
    
  }
  cout<<"do you want to change more (y/n) :";
  cin>>check;
  }while(check =='y');

  }
}

// desiplays contents
void person::display1()
{
  cout << "\nYour Entered data is: \n\n";
  cout << "\tName: " << this->name << endl;
  cout << "\tGender: " << this->gender << endl;
  cout << "\tAge: " << this->age << endl;
  cout << "\tCitizenship no: " << this->citizenship << endl;
  cout << "\tProfession: " << this->profession << endl;
  cout << "\tAddress: " << this->address << endl;
  cout << "\tPhone Number: " << this->phonenumber << endl;
  cout << "\tVaccine Date: " << this->vaccinedate << endl;
}
//see vaccine numbers and add vaccine number
void view_vaccine_stat()
    {  int f;
    	cout<<"-----------------------------------------------------";
    	cout<<"*****************Vaccine Statistics************";
    	cout<<"------------------------------------------------------";

    	int n;
    	cout<<"\t Choose the option::";
    	cout<<"\t\n 1. Add more no of Vaccine";
    	cout<<"\t\n 2. View Available number of Vaccine";
    	cout<<"\t\n 3. Exit";
		cout<<endl;
    	cin>>n;
    	fstream file;
		file.open("vaccinedata.txt",ios :: in |  ios :: out);
		file>>f;

    	switch(n)
    	{
    		case 1:
			    
    			int p;
    			cout<<"\t Enter number of vaccines you want to add"<<endl;
    			cin>>p;
    			f=f+p;
    			file.seekg(0);
    			file<<f;
    			cout<<"\t Now total number of vaccines are: "<<f;
          cout<<endl<<endl;
    			break;
    		case 2:
    			cout<<"\t Total number of vaccines are: "<<f;
          cout<<endl<<endl;
    			break;
    		case 3:
    			system("cls");
    			default:
    				cout<<"\n Enter Valid Options";
		}
		file.close();
		
    }
void filterbyprof()
{
  string prof;
  person d1;
  ifstream file1;
  file1.open("Input.txt");
  cout << "Enter profession: ";
  cin >> prof;
  cout << "\n";
  cout << "Name\t\t"
       << "Gender\t\t"
       << "Age\t\t"
       << "ID no.\t\t"
       << "Profession\t\t"
       << "Address\t\t"
       << "Phone Number\t\t"
       << "Vaccine Date\t\t" << endl;
  while (!file1.eof())
  {
    file1.read((char *)&d1, sizeof(d1));
    if (prof.compare(d1.profession) == 0)
    {
      cout << d1.name << "\t\t"
           << d1.gender << "\t\t"
           << d1.age << "\t\t"
           << d1.citizenship << "\t\t"
           << d1.profession << "\t\t"
           << d1.address << "\t\t"
           << d1.phonenumber << "\t\t"
           << d1.vaccinedate << "\t\t" << endl;
    }
  }
  file1.close();
}
void filterbyid()
{
  string id;
  person d1;
  ifstream file1;
  file1.open("Input.txt");
  cout << "Enter ID: ";
  cin >> id;
  cout << "\n";
  cout << "Name\t\t"
       << "Gender\t\t"
       << "Age\t\t"
       << "ID no.\t\t"
       << "Profession\t\t"
       << "Address\t\t"
       << "Phone Number\t\t"
       << "Vaccine Date\t\t" << endl;
  while (!file1.eof())
  {
    file1.read((char *)&d1, sizeof(d1));
    if (id.compare(d1.citizenship) == 0)
    {
      cout << d1.name << "\t\t"
           << d1.gender << "\t\t"
           << d1.age << "\t\t"
           << d1.citizenship << "\t\t"
           << d1.profession << "\t\t"
           << d1.address << "\t\t"
           << d1.phonenumber << "\t\t"
           << d1.vaccinedate << "\t\t" << endl;
    }
  }
  file1.close();
}
void filterbygender()
{
  string g;
  person d1;
  ifstream file1;
  file1.open("Input.txt");
  cout << "Enter Gender(m/f/o): ";
  cin >> g;
  cout << "\n";
  cout << "Name\t\t"
       << "Gender\t\t"
       << "Age\t\t"
       << "ID no.\t\t"
       << "Profession\t\t"
       << "Address\t\t"
       << "Phone Number\t\t"
       << "Vaccine Date\t\t" << endl;
  while (!file1.eof())
  {
    file1.read((char *)&d1, sizeof(d1));
    if (g.compare(d1.gender) == 0)
    {
      cout << d1.name << "\t\t"
           << d1.gender << "\t\t"
           << d1.age << "\t\t"
           << d1.citizenship << "\t\t"
           << d1.profession << "\t\t"
           << d1.address << "\t\t"
           << d1.phonenumber << "\t\t"
           << d1.vaccinedate << "\t\t" << endl;
    }
  }
  file1.close();
}
void filterbyage()
{
  string age1;
  person d1;
  ifstream file1;
  file1.open("Input.txt");
  cout << "Enter age: ";
  cin >> age1;
  cout << "\n";
  cout << "Name\t\t"
       << "Gender\t\t"
       << "Age\t\t"
       << "ID no.\t\t"
       << "Profession\t\t"
       << "Address\t\t"
       << "Phone Number\t\t"
       << "Vaccine Date\t\t" << endl;
  while (!file1.eof())
  {
    file1.read((char *)&d1, sizeof(d1));
    if (age1.compare(d1.age) == 0)
    {
      cout << d1.name << "\t\t"
           << d1.gender << "\t\t"
           << d1.age << "\t\t"
           << d1.citizenship << "\t\t"
           << d1.profession << "\t\t"
           << d1.address << "\t\t"
           << d1.phonenumber << "\t\t"
           << d1.vaccinedate << "\t\t" << endl;
    }
  }
  file1.close();
}
void filter()
{
  system("clear");
  cout << "\t\t\t\tFilter Data by:\n";
  cout << "\t\t1.Profession" << endl;
  cout << "\t\t2.Age" << endl;
  cout << "\t\t3.Gender" << endl;
  cout << "\t\t4.Name" << endl;
  cout << "\t\t5.Citizenship Number" << endl;
  int a;
  cout << endl
       << "\t\t\tENTER THE NUMBER ASSOCIATED WITH DETIALS TO CHANGE : \n\n";
  cin >> a;
  switch (a)
  {
  case 1:
    filterbyprof();
    break;
  case 2:
    filterbyage();
    break;
  case 3:
    filterbygender();
    break;
  case 4:
    filterbyid();
    break;
  default:
    break;
  }
  // mainmenu();
}

void mainmenu()
{
  int a;
  // system("clear");
  cout << "\n"
       << "1.Vaccine statics\t\t\t2. Add Information"
       << endl;
  cout << "3.Search Data\t\t\t\t4.Exit" << endl;
  cout << "\n\nSelect a option: ";
  cin >> a;
  switch (a)
  {
    case 1:
    view_vaccine_stat();
    mainmenu();
    break;
    
  case 2:
    savedata();
    mainmenu();
    break;
  case 3:
    filter();
    mainmenu();
    break;
  case 4:
    break;
  default:
    break;
  }
  
}
int main()
{
  mainmenu();
  return 0;
}
