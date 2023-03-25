//Delete the middle element of an array
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
  if(n%2!=0)
  {
  position=(n/2)+1;
  for(int i=position-1; i<n-1; i++)
  arr[i]=arr[i+1];
  cout<<"Total number is odd so the middle element is deleted from the array and updated array elements are: ";
  for(int i=0; i<n-1; i++)
  cout<<" "<<arr[i];
  }
  else
  {
  position=(n/2)+1;
  for(int i=position-1; i<n-1; i++)
  arr[i]=arr[i+1];
  cout<<"Total number is even so the after middle element is deleted from the array and updated array elements are: ";
  for(int i=0; i<n-1; i++)
  cout<<" "<<arr[i];
  }
  return 0;
}


//Delete specified positioned element from an array
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
  cout<<endl;
  cout<<"The values are: ";
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
  cout<<endl;
  cout<<"Total number is odd so the middle element is deleted from the array and updated array elements are: ";
  cin>>position;
  if(position>n-1)
  cout<<"Not possible to delete!!!";
  else
  {
  for(int i=position-1; i<n-1; i++)
  arr[i]=arr[i+1];
  cout<<"Total number is even so the after middle element is deleted from the array and updated array elements are: ";
  for(int i=0; i<n-1; i++)
  cout<<" "<<arr[i];
  }
  return 0;
}
*/
