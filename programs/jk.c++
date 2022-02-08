#include <iostream>
using namespace std;

class matrix{
   int a[2][2];
   public:
   void getmatrix();
   void display();
   matrix operator *(matrix);

};

void matrix :: getmatrix()
{  
   for(int i =0; i<2; i++)
   {
      for(int j =0; j<2; j++)
      {
        cout<<"enter matrix"<<"["<<i<<","<<j<<"]";
         cin>>a[i][j];
      }
      cout<<endl;
   }
}

void matrix :: display()
{
   for(int i =0 ; i<2; i++)
   {
      for(int j =0; j<2; j++)
      {
         cout<<a[i][j]<<"\t";
      }
      cout <<endl;
   }
}

matrix matrix :: operator *(matrix s)
{
   matrix temp;
   temp.a[0][0] =0;
   temp.a[0][1] =0;
   temp.a[1][0] =0;
   temp.a[1][1] =0;

  for(int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
      for (int k = 0; k < 2; ++k)
        {
            temp.a[i][j] += (a[i][k] * s.a[k][j]);
        }
  //  for(int i = 0; i<2; i++)
  //  {
  //     for(int j =0; j<2; j++)
  //     {
  //        for(int k =0; k<2; k++)
  //        {
  //           temp.a[i][j] += a[i][k] * s.a[k][j];
  //        }
  //     }
  //  }
   return temp;
}
int main()
{
   matrix a1,a2,a3;
   a1.getmatrix();
   a2.getmatrix();
   a3 = a1*a2;
   a3.display();
}