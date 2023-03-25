#include<iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x=1;


int main(){
    int x=5;
    cout<<"Local x in main outer scope is: "<<x<<endl;
{
  int x=7;
  cout<<"Locat x in main inner scope is: "<<x<<endl;
}
cout<<"Local x in main outer scope is: "<<x<<endl;


useLocal();
useStaticLocal();
useGlobal();

useLocal();
useStaticLocal();
useGlobal();


cout<<endl<<"Local x in main scope: "<<x<<endl;
}


void useLocal(){
int x=25;
cout<<"Local x is "<<x<<" on entering in use local scope"<<endl;
++x;
cout<<"Local x is "<<x<<" on extering from use local scope"<<endl;
}

void useStaticLocal(){
static int x=50;
cout<<"Static x is "<<x<<" on entering in use static loacal scope"<<endl;
++x;
cout<<"Static x is "<<x<<" on extering from use static local scope."<<endl;
}

void useGlobal(){
  int x=10;
  cout<<"Global x is "<<x<<" on entering in use global scope."<<endl;
  x*=x;
  cout<<"Global x is "<<x<<" on extering from use global scope"<<endl;
}
