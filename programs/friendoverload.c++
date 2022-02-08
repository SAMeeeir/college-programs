#include <iostream>
using namespace std;

class matrix{
   int a[2][2];
   
   public:
   void getmatrix();
   void display();
   friend matrix operator *(matrix, matrix);
};

void matrix :: getmatrix()
{   
    
    for(int i =0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            cin>>a[i][j];
        
            
        }
        cout <<endl;
    }
    cout<<endl;
}
void matrix :: display()
{   
    for(int i = 0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
           cout<<a[i][j]<<"\t";
        }
         cout<<endl;
    }
   
}
matrix operator *(matrix a1,matrix a2)
{
    matrix temp;
    for(int i =0; i<2; i++)
    {
        for (int j =0 ; j<2; j++)
        {
            temp.a[i][j]=0;
        }
    }

    for(int i = 0; i<2 ; i++)
    {
        for(int j =0; j<2 ; j++)
        {
            for(int k =0; k<2; k++)
            {
                temp.a[i][j] += a1.a[i][k]*a2.a[k][j];
            }
        }
    }
    return temp;

}

int main()
{
    matrix s1,s2,s3;
    cout<<"enter 1st  matrix is :";
    cout<<endl;
    s1.getmatrix();
    cout<<"the  1st matrix is :";
    cout<<endl;
    s1.display();
    cout<<"enter  2nd matrix is :";
    cout<<endl;
    s2.getmatrix();
    cout<<"the  2nd matrix is :"<<endl;
    s2.display();
    s3 = s1*s2;
    cout<<"the produect of two matrix is :"<<endl;
    s3.display();

}