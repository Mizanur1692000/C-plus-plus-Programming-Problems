#include<iostream>
using namespace std;
int main()
{
  int arr[1000],n;
  cout<<"How many numbers do you want to compare: ";
  cin>>n;
  cout<<"The numbers are: ";
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  int max=arr[0],min=arr[0];
  for(int i=1; i<n; i++)
  {
    if(max<arr[i])
    {
    max=arr[i];
    }
    if(min>arr[i])
    {
    min=arr[i];
    }
  }
  cout<<"Max = "<<max<<endl<<"Min = "<<min<<endl;
  return 0;
}
