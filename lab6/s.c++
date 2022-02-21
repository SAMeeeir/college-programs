#include <iostream>
using namespace std;
class design1{
public:
int code;
int qty;
int price;
design1(){
code = 2;
qty = 30;
price = 1500;
};
void display(){
cout << "Design 1 qty: "<<qty<<endl;
}
};
class design2{
public:
int code;
int value;
design2(){};
design2(design1 d){
this->code = d.code;
this->value = d.qty*d.price;
}
void display(){
cout << "Design 2 value: "<<value<<endl;
}
};
int main(){
design1 d1;
design2 d2;
d2=d1;
d1.display();
d2.display();
}