//My way
/*
#include<iostream>
using namespace std;
int main()
{
  int a[]={10,2,15,20,35,46,85},value,position=0;
  cout<<"Enter the value which you want to search: ";
  cin>>value;
  for(int i=0; i<7; i++)
  {
    if(a[i]==value)
    {
      position=position+1;
      cout<<"The position of the value is: "<<position;
    }
    else
    {
      position++;
    }
  }
  return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
  int arr[]={10,20,30,40,50,60,70,80,90,100},value,pos=-1;
  cout<<"Enter the value: ";
  cin>>value;
  for(int i=0; i<10; i++)
  {
    if(arr[i]==value)
    {
      pos=i+1;
      break;
    }
  }
  if(pos==-1)
  {
    cout<<"The value is not found in the array!!!";
  }
  else
  cout<<"The value is found in the array and its position is: "<<pos;
  return 0;
}
