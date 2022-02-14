#include<iostream>
using namespace std;
class design1{
int code,qty;
float price;
public:
design1(int a,int b,float c){
code=a;
qty=b;
price=c; }
void display(){cout<<"code: "<<code<<", qty: "<<qty<<", price:"<<price<<endl; }
int getcode() { return code;}
float getqty(){ return qty;}
float getprice(){return price;}
operator float() {return qty*price;} }; //OPOverLoading
class design2{
int code;
float value;
public:
design2(){
code=0;
value=0;
}
design2(int x,float y){
code=x;
value=y;
}
void display(){ cout<<"code: "<<code<<", value: "<<value<<endl; }
design2(design1 d1){
code=d1.getcode();
value=d1.getqty()*d1.getprice();
}
//int setcode(int c){code=c;}
//int setvalue(float v){value=v;}
};int main(){
design1 d1(200,10,0.1);
design2 d2;
float total = d1;
cout<<"Design 1 total val:"<<total<<endl;
d2=d1;
cout<<"\nDesign 1: \n";
d1.display();
cout<<"\nDesign 2: \n";
}