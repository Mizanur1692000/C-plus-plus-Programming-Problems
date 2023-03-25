#include<iostream>
#include<fstream>

using namespace std;

class Student{
  private:
  int studentId;
  string studentName;
  string fileName;
  ofstream writeToFile;
  ifstream readFromFile;
  public:
  Student(int stId=0, string stName=" ", string fName=" ")
  {
    setStudentId(stId);
    setStudentName(stName);
    setFileName(fName);
  }
  string getFileName(){
    return fileName;
  }
  void setFileName(string fName){
    fileName=fName;
  }
  void setStudentId(int stId){
    studentId=stId;
  }
  int getStudentId(){
    return studentId;
  }
  void setStudentName(string stName){
    studentName=stName;
  }
  string getStudentName(){
    return studentName;
  }
  void input(){
    cout<<"Enter student Id:"<<endl;
    cin>>studentId;
    cout<<"Enter student Name: "<<endl;
    cin>>studentName;
  }

  void saveInFile(){
    input();
    writeToFile.open(fileName,ios::app);
    if(!writeToFile){
      cout<<"File cannot be opened.";
    }
    writeToFile<<getStudentId()<<" "<<getStudentName()<<endl;
    writeToFile.close();
  }
  void fileRead(){
    readFromFile.open(fileName,ios::in);
    if(!readFromFile){
      cout<<"File could not be opened.";
    }
    while(!readFromFile.eof()){
    readFromFile>>studentId>>studentName;
    cout<<"Informations from file: "<<fileName<<endl;
    cout<<"Student Id: "<<studentId<<endl;
    cout<<"Student Name: "<<studentName<<endl;
    }
    readFromFile.close();
  }


};
int main(){
  Student student;
  student.setFileName("studetn.txt");


  student.saveInFile();
  student.fileRead();
}
