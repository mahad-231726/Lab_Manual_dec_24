#include<iostream>
using namespace std;
class LocalPhone{
 protected:
  long ph;
  public:
   void input(){
    cout<<"Enter phone number: ";
    cin>>ph;
   }
   void show(){
    cout<<ph<<endl;
   }
};
class NatPhone : public LocalPhone{
 protected:
  int ccode;
  public:
   void input()
   {
    cout<<"Enter city code: ";
    cin>>ccode;
    LocalPhone::input();
   }
   void show(){
    cout<<ccode<<" ";
    LocalPhone::show();
   }
};
class intphone:public NatPhone{
 private:
  int ncode;
  public:
   void input(){
    cout<<"Enter country code: ";
    cin>>ncode;
    NatPhone::input();
   }
   void show(){
    cout<<ncode<<" ";
    NatPhone::show();
   }
};
int main(){
 intphone p;
 p.input();
 p.show();
 return 0;
}