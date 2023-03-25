#include<iostream>
#include<iomanip>
using namespace std;


void modifiedArray(int [],int);
void modifiedElement(int);




int main(){
  const int arraySize=5;
  int a[arraySize]={0,1,2,3,4};

  cout<<"Original array are: "<<endl;
  for(int i=0; i<arraySize; i++)
  cout<<setw(3)<<a[i];
  cout<<endl;


  modifiedArray(a,arraySize);
  cout<<"Modified array: "<<endl;
  for(int i=0; i<arraySize; i++)
  cout<<setw(3)<<a[i];
  cout<<endl;


  modifiedElement(a[4]);
}

void modifiedArray(int b[],int arrayOfSize){
for(int i=0; i<arrayOfSize; i++)
b[i]*=2;
}

void modifiedElement(int e){
   cout<<"Value of modified array is : "<<e*2<<endl;
}
