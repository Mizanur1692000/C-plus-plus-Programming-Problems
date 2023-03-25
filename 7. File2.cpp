#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main(){
    string name;
    int age;
    ofstream file;
    file.open("Student_list1.text",ios::out|ios::app);
    for(int i=1; i<=3; i++){
    cout<<"Enter the name of the student: ";
    getline(cin,name);
    file<<name<<"\t";
    cout<<"Enter the age of the student: ";
    cin>>age;
    file<<age<<endl;
    cin.ignore();
    }
    file.close();


    return 0;
}

