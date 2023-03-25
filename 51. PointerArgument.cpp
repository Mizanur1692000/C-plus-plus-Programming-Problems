#include<iostream>
using namespace std;

void cobeByReference(int *x);

int main(){
  int x=5;
  int *yptr;
  yptr=&x;
  *yptr=10;
  cout<<*yptr<<endl;

  cobeByReference(&x);
  cout<<"The value of new x is: "<<x<<endl;
}

void cobeByReference(int *x){
  *x=(*x)*(*x)*(*x);
}
