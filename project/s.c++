#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class person{
	char name;
	int rollno;
	
	int tauko;

	public:
	int age;
	void getdata();
	void display();
	void savedata();
	void displaydata();
};
void person :: getdata()
{   cout<<"enter name :";
    cin>>name;
	cout<<"enter rollno :";
	cin>>rollno;
	cout<<endl <<"enter age :";
	cin>>age;
	cout<<endl<<"enter tauko :";
	cin>>tauko;
	cout<<endl;
}
void person :: display()
{   cout<<name;
	cout<<"rollno :"<<rollno;
	cout<<"\n age :"<<age;
	cout<<"\n tauko :"<<tauko;
	cout<<endl;
}
void person :: savedata()
{
	fstream store;
	store.open("tauko.txt",ios :: app | ios :: out);
	store.write((char*)this,sizeof(this));
	store.close();
}

int main()
{
	person x;
	x.getdata();
	x.display();
	x.savedata();
		int p;
	fstream infile;
	person d;
	infile.open("tauko.txt",ios :: in);
	cout<<"enter age :";
	cin>>p;
	while(infile.eof()==0)
	{
		infile.read((char*)&d,sizeof(d));
		
			if(d.age == p)
			{
              d.display();
			}
		
	}
}