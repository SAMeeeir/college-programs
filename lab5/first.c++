#include <iostream>
using namespace std;

class complex{
   int const real=8;
   int imag =7;

   public :
 
  int returnreal() const;
  int returnimag();
  void display() const;
};
int complex :: returnreal() const{
    return real;
}
int complex :: returnimag(){
    return imag;
}
void complex :: display() const {
    cout <<"the complex number is :"<<real<<"+  i"<<imag;
    cout<<endl;
}

int main()
{
    complex x;
    x.returnreal();
    x.returnimag();
    x.display();

}