#include<iostream>
using namespace std;

class STUDENT
{
  private:
  string studentName;
  string studentId;
  public:
  STUDENT(string ,string );
  void setStudentName(string );
  string getStudentName();
  void setStudentId(string );
  string getStudentId();
  void virtual input();
  void virtual display();
};
STUDENT::STUDENT(string name,string id):studentName(name),studentId(id){}
void STUDENT::setStudentName(string name)
{
  studentName=name;
}
void STUDENT::setStudentId(string id)
{
  studentId=id;
}
string STUDENT::getStudentName()
{
  return studentName;
}
string STUDENT::getStudentId()
{
  return studentId;
}
void STUDENT::input()
{
  cout<<"Enter the student name: ";
  cin>>studentName;
  cout<<endl;
  cout<<"Enter the student id: ";
  cin>>studentId;
  cout<<endl;
}
void STUDENT::display()
{
  cout<<"The name of the student is: "<<getStudentName()<<endl;
  cout<<"The id of the student is: "<<getStudentId()<<endl;
}


int main()
{
  STUDENT *std;
  std->input();
  std->display();

}
