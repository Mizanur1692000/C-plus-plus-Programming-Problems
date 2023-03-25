#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"Multiplication table of "<<num<<" is"<<endl;
  for(int i=1; i<=10; i++)
  {
    cout<<num<<" X "<<i<<" = "<<num*i<<endl;
  }
  return 0;
}
