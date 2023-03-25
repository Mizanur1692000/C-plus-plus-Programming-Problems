/*
//If data types are same
#include<iostream>
using namespace std;
template<class t>
t add(t a, t b)
{
  return a+b;
}
int main()
{
  cout<<add(50,60)<<endl;
  cout<<add(50.5,60.5)<<endl;
  cout<<add(50.55,60.55)<<endl;
}
*/
//If data types are not same
#include<iostream>
using namespace std;
template<class t, class T>
T add(t a, T b)//if you use T then output will return float
                //if you use t then output will return int
{
  return a+b;
}
int main()
{
  cout<<add(20,60.5)<<endl;
}
