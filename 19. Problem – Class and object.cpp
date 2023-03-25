#include<iostream>
using namespace std;

#include "student.h"

int main()
{
  int n;
  cout<<"Enter the total number of student: ";
  cin>>n;
  Student std[n];
  for(int i=0; i<n; i++){
    std[i].input();
    std[i].calculate();
    std[i].display();
  }
}