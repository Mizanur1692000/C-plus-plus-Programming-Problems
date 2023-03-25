#include <iostream>

using namespace std;

class Student{
  private:
    int studentId;
    string studentName;
    int noOfSubjects;
    double sum=0;
    double avgMark=0;
    //....
    // Add necessary data members;
  public:
   //Student(int=0,string=" ",int=0);
    void inputSubjects();//take input for n number of subjects marks;
    void inputStudentInfo();//take inputs for student information
    void calculateAvgMark(); // calculate average marks for N number of subjects 
    void Grade();

    /*
    These functions determine the grade of student on following criteria:
      A grade: 87 – 100
      B grade: 75 – 86
      C grade: 65 -74 
      D grade: 50 – 64 
      F grade: < 50
    */
   void displayResults();
};

void Student::inputStudentInfo(){
  cout<<"Student ID: "<<endl;
  cin>>studentId;
  cout<<"Student Name: "<<endl;
  cin>>studentName;
}

void Student::inputSubjects(){
  int a;
  cout<<"Total number of subjects: "<<endl;
  cin>>noOfSubjects;
  cout<<"The numbers are: "<<endl;
  for(int i=1; i<=noOfSubjects; i++){
    cin>>a;
    sum+=a;
    }
    cout<<endl<<endl;
  }


void Student::calculateAvgMark(){
    avgMark=sum/noOfSubjects;
}

void Student::Grade(){
  if(avgMark<=100 && avgMark>87){
    cout<<"The student got A Grade"<<endl<<endl<<endl;
  }
  else if(avgMark<=86 && avgMark>75){
    cout<<"The student got B Grade"<<endl<<endl<<endl;
  }
  else if(avgMark<=74 && avgMark>65){
    cout<<"The student got C Grade"<<endl<<endl<<endl;
  }
  else if(avgMark<=64 && avgMark>50){
    cout<<"The student got D Grade"<<endl<<endl<<endl;
  }
  else if(avgMark<50){
    cout<<"The student Failed. Try again."<<endl<<endl<<endl;
  }
}
void Student::displayResults(){
    cout<<"The ID of the student is: "<<studentId<<endl;
    cout<<"The name of the student is: "<<studentName<<endl;
    cout<<"Total number of subjects: "<<noOfSubjects<<endl;
    cout<<"Average mark is: "<<avgMark<<endl;

}



int main() {
  //Create a Student class objects and call all the functions.
  int n;
  cout<<"Enter the total number of students: ";
  cin>>n;
  Student std[n];
  for(int i=0; i<n; i++){
    cout<<"Enter the "<<i+1<<" no of student's information: "<<endl;
    std[i].inputStudentInfo();
    std[i].inputSubjects();
    std[i].calculateAvgMark();
    std[i].displayResults();
    std[i].Grade();
   
  }
}