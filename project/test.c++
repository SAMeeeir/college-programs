#include <iostream>
#include <fstream>
using namespace std;
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
    			break;
    		case 2:
    			cout<<"\t Total number of vaccines are: "<<f;
    			break;
    		case 3:
    			system("cls");
          exit(0);
    			default:
    				cout<<"\n Enter Valid Options";
		}
		file.close();
		
    	
}
int main()
{
  view_vaccine_stat();
}
