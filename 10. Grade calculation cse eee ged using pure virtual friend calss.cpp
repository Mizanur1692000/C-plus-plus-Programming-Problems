#include<iostream>
using namespace std;
class Student{
private:
    string stdId;
    string stdFirstName;
    string stdLastName;
public:
    Student(string id="",string first="", string last=""):stdId(id),stdFirstName(first),stdLastName(last){
    }
    void setStdId(string id){
    stdId=id;
    }
    string getStdId(){
    return stdId;
    }
    void setStdFirstName(string firstName){
    stdFirstName=firstName;
    }
    string getStdFirstName(){
    return stdFirstName;
    }
    void setStdLastName(string lastName){
    stdLastName=lastName;
    }
    string getStdLastName(){
    return stdLastName;
    }
    virtual void grade()=0;
    virtual void print(){
    cout<<"Student Information: "<<endl;
    cout<<"Student Id: "<<endl;
    cout<<"Student First Name: "<<endl;
    cout<<"Student Last Name: "<<endl;
    }
};
int main()
{
    Student ("201014061","Mizanur", "Rahman");
    print();
}
