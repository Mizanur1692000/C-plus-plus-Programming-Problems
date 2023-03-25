#include<iostream>
using namespace std;

int add(int, int);

int main()
{
  int result=add(20,30);
  cout<<"sum= "<<result;


}
int add(int a, int b)
{
  int sum=a+b;
  return sum;
}

