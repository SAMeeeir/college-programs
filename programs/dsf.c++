#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

class student
{

  int marks;
  int roll;
  char name[30];
  static char tes[30];

public:
  student(){};
  void get_data()
  {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;
  }
  void test()
  {
    cout << "Enter name of whose data you want to display: ";
    cin >> tes;
  }
  void display()
  {

    if (strcmp(name,tes)==0)
    {
      cout << "Name: " << name << "  Roll: " << roll << "  marks: " << marks;
    }
  }
};
char student::tes[30];
int main()
{
  int n;
  cout << "Enter: ";
  cin >> n;
  student s[n], p[n], o;
  ofstream ofs("file4.txt");
  for (int i = 0; i < n; i++)
  {
    s[i].get_data();
    ofs.write((char *)&s[i], sizeof(s[i]));
  }
  ofs.close();
  ifstream ins("file4.txt");
  o.test();
  for (int i = 0; i < n; i++)
  {
    ins.read((char *)&p[i], sizeof(p[i]));
    p[i].display();
  }
  ins.close();
  return 0;
}