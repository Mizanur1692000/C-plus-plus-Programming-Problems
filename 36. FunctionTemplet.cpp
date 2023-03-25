#include<iostream>
using namespace std;


template <class t>
  t maximum(t value1,t value2,t value3){
    t max=value1;
     if(value2>max){
      max=value2;
    }
    if(value3>max){
    max=value3;
    }
    return max;
  }


  template <class t>
  t sq(t x){
  return x*x;
  }

  int main(){
    int int1,int2,int3;
    cout<<"Enter three integer number: "<<endl;
    cin>>int1>>int2>>int3;
    cout<<"Maximum integer is : "<<maximum(int1,int2,int3)<<endl;

    double double1,double2,double3;
    cout<<"Enter three double value: "<<endl;
    cin>>double1>>double2>>double3;
    cout<<"Maximum double is: "<<maximum(double1,double2,double3)<<endl;

    char char1,char2,char3;
    cout<<"Enter three character value: "<<endl;
    cin>>char1>>char2>>char3;
    cout<<"Maximum character is : "<<maximum(char1,char2,char3)<<endl;


    cout<<"Square of integer is: "<<sq(3)<<endl;
    cout<<"Square of double is: "<<sq(3.00)<<endl;
  }
