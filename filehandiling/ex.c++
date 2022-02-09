#include <iostream>
using namespace std;
class Distance {
   private:
   int feet; // 0 to infinite
   int inches; // 0 to 12
   public:
   // required constructors
   Distance() {
      feet = 0;
      inches = 0;
   }
   Distance(int f, int i) {
      feet = f;
      inches = i;
   }
   friend ostream &operator<<( ostream &out, const Distance &D ) {
      out << "F : " << D.feet << " I : " << D.inches;
      return out;
   }
   friend istream &operator>>( istream &in, Distance &D ) {
      in>> D.feet >> D.inches;
      return in;
   }
};
int main() {
   Distance D1(11, 10), D2(5, 11), D3;
   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;
   return 0;
}