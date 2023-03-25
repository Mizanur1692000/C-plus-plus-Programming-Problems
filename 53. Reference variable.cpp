#include <iostream>

using namespace std;

void passByRef(int &numberRef){
  numberRef=numberRef*numberRef;
}

int passByValue(int number){
  return number*number;
}

int main() {

  int x=3;

  passByRef(x);

  cout<<"Pass by reference:"<<x<<endl;
  cout<<"Pass by value:"<<passByValue(x)<<endl;


  int z = 50;
  int &y=z;
  int *p;
  p = &z;

  y = 7;

  cout<<"Value of y="<<y<<endl;
  cout<<"Value of z="<<z;



}
