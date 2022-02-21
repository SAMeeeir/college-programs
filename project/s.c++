#include<iostream>
#inlcude<fstream>
using namespace std;
class vaccinedata
{   int f =0;
    public :
	void view_vaccine_stat;
};
     void vaccinedata::view_vaccine_stat
    {
    	cout<<"-----------------------------------------------------";
    	cout<<"******************Vaccine Statistics*************";
    	cout<<"------------------------------------------------------";

    	int n;
    	cout<<"\t Choose the option::";
    	cout<<"\t\t 1. Add more no of Vaccine";
    	cout<<"\t\t 2. View Available number of Vaccine";
    	cout<<"\t\t 3. Exit";
    	cin>>n;
    	fstream file("vaccinedata.txt");

    	switch(n)
    	{
    		case 1:
    			int p;
    			cout<<"\t Enter number of vaccines you want to add"<<endl;
    			cin>>p;
    			f=f+p;
    			file.seekg(0);
    			file<<f;
    			cout<<"\t Now total number of vaccines are: "<<f+a;
    			break;
    		case 2:
    			cout<<"\t Now total number of vaccines are: "<<a+f;
    			break;
    		case3:
    			system("cls");
    			default:
    				cout<<"\n Enter Valid Options"
		}
		file.close();
		
    	
}
int main()
{
    vaccinedata x;
}