#include<iostream>
using namespace std;
class Employee{
 protected:
  int eid, scale;
  public:
   Employee(){
    eid=-1;
    scale= 0;
   }
   void input(){
    cout<<"Enter Employee id: "<<endl;
    cin>>eid;
    cout<<"Scale: "<<endl;
    cin>>scale;
   }
   void show(){
    cout<<"Employee ID: "<<eid<<endl;
    cout<<"Scale: "<<scale<<endl;
   }
};
class Manager : public Employee{
 private:
  int mid;
  char dept[30];
  public:
   Manager(){
    Employee();
    mid=0;
   }
   void input(){
    Employee::input();
    
    cout<<"Enter Manager id: ";
    cin>>mid;
    cout<<"Enter Department: ";
    cin>>dept;
   }
   void show()
   {
    Employee::show();
    cout<<"Manager ID: "<<mid<<endl;
    cout<<"DEpartment: "<<dept<<endl; 
   }
};
int main(){
 Manager m;
 m.input();
 m.show();
 return 0;
}