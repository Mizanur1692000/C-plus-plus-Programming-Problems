#include<iostream>
using namespace std;

void displayArray(int a[],int size)
{
  for(int i=0; i<=4; i++)
  cout<<a[i]<<endl;

}

int main()
{
  int a[5]={10,20,30,40,50};
  displayArray(a,5);
  return 0;

}
