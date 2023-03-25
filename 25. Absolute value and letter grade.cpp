#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the mark: ";
  cin>>num;
  if(num<0)
  {
    num=(-num);
  }
   if(num>100)
  cout<<"The mark is not valid!!";
   else if(num<=100 && num>=80)
  cout<<"A+";
   else if(num<80 && num>=70)
  cout<<"A";
   else if(num<70 && num>=60)
  cout<<"A-";
   else if(num<60 && num>=50)
  cout<<"B";
   else if(num<50 && num>=40)
  cout<<"C";
   else if(num<40 && num>=33)
  cout<<"D";
  else
  cout<<"Fail!!";
  return 0;

}
