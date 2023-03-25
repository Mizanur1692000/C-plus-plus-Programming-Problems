#include<iostream>
using namespace std;

inline double cube(const double sideValue){
  return sideValue*sideValue*sideValue;
}


int main(){
  cout<<"Enter the side length of cube: "<<endl;
  double sideValue;
  cin>>sideValue;
  cout<<"Volume of side cube "<<sideValue<<" is "<<cube(sideValue)<<endl;
}
