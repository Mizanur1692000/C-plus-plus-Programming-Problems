#include<iostream>
using namespace std;
int main()
{
  int A[]={0,1,2,3,4,5,6,7,8,9},B[10];
  cout<<"A[]: ";
  for(int i=0; i<10; i++)
  {
    cout<<A[i]<<" ";
  }
  cout<<endl;
  for(int i=0; i<10; i++)
  {
    B[i]=3*A[i];
  }
  cout<<"B[]: ";
  for(int i=9; i>=0; i--)
  cout<<B[i]<<" ";
}
