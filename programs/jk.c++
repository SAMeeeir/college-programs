#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student
{
public:
string name, address, program;
void get_input();
void store(char file_name[]);
void display()
{
cout << name;
}
};
void Student::get_input()
{
cout << "Enter the student name: ";
getline(cin, name);
cout << "Enter the address: ";
getline(cin, address);
cout << "Enter the program: ";
getline(cin, program);
}
void Student::store(char file_name[])
{
ofstream output; output.open(file_name, ios::app);
output.write((char *)this, sizeof(*this)); output.close();
}
int main()
{
Student a[3];char file[30] = "output.txt";
for (int i = 0; i < 3; i++)
{
cout << "For student " << i + 1 << ": ";
a[i].get_input();
a[i].store(file);
}
string name;
cout << "Enter the name of student whose data you want: ";
cin >> name;
ifstream take_data(file); Student check;
for (int i = 0; i < 3; i++)
{
take_data.read((char *)&check, sizeof(check));
if (name == check.name)
{
cout << "Name: " << check.name << endl;
cout << "Address: " << check.address << endl;
cout << "Program: " << check.program << endl;
}
break;
}
take_data.close();
return 0;
}