#include<iostream>
using namespace std;

class person
{
  public:
  string personName;
  int personAge;
  void display()
  {
    cout<<"Person name is: "<<personName<<endl<<"Person age is: "<<personAge;
  }
};
class student : public person
{
  public:
  int id;
  void display2(){
    cout<<"Person name is: "<<personName<<endl<<"Person age is: "<<personAge<<endl;
  cout<<"Person id is: "<<id;
  }
};


int main()
{
  person st;
  st.personName="Mizanur Rahman";
  st.personAge=22;
  st.display();
  cout<<endl;
  student std;
  std.id=101;
  std.personName="Mizanur Rahman";
  std.personAge=22;
  std.display2();

}
