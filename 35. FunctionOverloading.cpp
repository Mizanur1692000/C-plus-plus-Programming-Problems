#include<iostream>
#include<iomanip>
using namespace std;

int sq(int x){
  return x*x;
}

float sq(float x){
  return x*x;
}

double sq(double x){
  return x*x;
}

float sq(float x, float y){
  return x*y;
}

int main(){
  float y=3.5;
  int z=5;
  double i=3.00;
  cout<<fixed<<setprecision(8)<<sq(y)<<endl;
  cout<<sq(z)<<endl;
  cout<<fixed<<setprecision(2)<<sq(i)<<endl;
  cout<<sq(y,z)<<endl;

}
