//Insert a value at the middle of the array
#include<iostream>
using namespace std;
int main()
{
  int arr[100],position,n,value;
  cout<<"Enter the total number of elements: ";
  cin>>n;
  cout<<"Insert "<<n<<" values of the array: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];
  cout<<endl<<"The values are: ";
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
  cout<<endl;
  cout<<"Enter the new value: ";
  cin>>value;
  if(n%2==0)
  {
  position=(n/2)+1;
  for(int i=n-1; i>=position-1; i--)
  arr[i+1]=arr[i];
  arr[position-1]=value;
  cout<<"Total number is even so the new value will add at the middle of the array updated array elements are: ";
  for(int i=0; i<=n; i++)
  cout<<" "<<arr[i];
  }
  else
  {
  position=(n/2)+2;
  for(int i=n-1; i>=position-1; i--)
  arr[i+1]=arr[i];
  arr[position-1]=value;
  cout<<"Total number is odd so the new value will add at after the middle of the array updated array elements are: ";
  for(int i=0; i<=n; i++)
  cout<<" "<<arr[i];
  }
  return 0;
}

//Insert a value at any position of an array
/*
#include<iostream>
using namespace std;
int main()
{
  int arr[100],position,n,value;
  cout<<"Enter the total number of elements: ";
  cin>>n;
  cout<<"Insert "<<n<<" values of the array: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];
  cout<<"The values are: ";
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
  cout<<endl;
  cout<<"Enter the position where you want to insert a new value: ";
  cin>>position;
  cout<<"Enter the new value: ";
  cin>>value;
  for(int i=n-1; i>=position-1; i--)
  arr[i+1]=arr[i];
  arr[position-1]=value;
  cout<<"Updated array elements are: ";
  for(int i=0; i<=n; i++)
  cout<<" "<<arr[i];
  return 0;
}
*/
