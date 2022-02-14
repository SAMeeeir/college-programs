 #include <iostream>
 #include <fstream>
 using namespace std;
 #include <cstring>

 class item{
     int a; string b ;

     public:
     void getdata();
     void putdata();
 };
void  item :: getdata()
{
    cout<<"enter name :"; cin<<b;
    cout<<endl<<"enter age :";cin <<a;
}
void item :: putdata()
{
    cout<<"name :"<<b;
    cout<<endl<<"age :"<<a;
}

int main()
{   fstream file;
   file.open("myfile.dat",ios :: in | ios :: out);
    item x[3];
    for(int i =0; i<3; i++)
    {
        cout<<"enter detials for "<<i<<" student.";
        x[i].getdata();
        file.write((char*) &item[i],sizeof(item[i]));
    }
    cout<<endl<<"OUTPUT:"<<endl;
    file.seekg(0);

    for(int j =0; i<3; i++)
    {
        file.read((char *)&item[j],sizeof(item[j]));
        item[j].putdata();
    }
    file.close();
}