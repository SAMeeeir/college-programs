#include <iostream>
using namespace std;

class matrix{
    int a[2][2];
    public:
    matrix()
    {
        for(int i=0; i<2;i++)
        {
            for(int j=0; j<2; j++)
            {
                a[i][j]=0;
            }
        }
    }
    void getmatrix();
    void display();
    friend matrix operator *(matrix &,matrix&);
};
void matrix :: getmatrix()
{  cout<<"enter matrix :\n";
    for(int i=0; i<2;i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>a[i][j];
                cout<<"\t";
            }cout<<endl;
        }cout<<endl;
}
void matrix :: display()
{
    cout<<"enterd matrix :\n";
    for(int i=0; i<2;i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<a[i][j];
                cout<<"\t";
            }cout<<endl;
        }cout<<endl;
}
matrix operator *(matrix &p,matrix &q)
{
    matrix temp;
    for(int i=0 ;i <2; i++)
    {
        for(int j =0 ;j<2; j++)
        {
            for (int k =0; k<2; k++)
            {
                temp.a[i][j]+=p.a[i][k]*q.a[k][i];
            }
        }
    }
    return temp;

}

int main()
{
    matrix x1,x2,x3;
    x1.getmatrix();
    x1.display();
    x2.getmatrix();
    x2.display();
    x3 = x1*x2;
    x3.display();
    
}