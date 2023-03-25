
#include<iostream>
using namespace std;


int main(){
  double marks[]={40,50,60,70,80,90};
  double *p;
  p=marks;

  cout<<"Using array: "<<endl;
  for(int i=0; i<5; i++){
  cout<<"marks["<<i<<"]: ";
  cout<<marks[i]<<endl;
 }

cout<<endl;


cout<<"Using pointer: "<<endl;
for(int i=0; i<5; i++){
  cout<<"*p("<<i<<"): ";
  cout<<*(p+i)<<endl;
}

}
