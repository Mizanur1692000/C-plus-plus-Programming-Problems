#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  float n, *marks;
  cout<<"Enter the total number of students: ";
  cin>>n;
  for(int i=0; i<n; i++)
  {
  cout<<"Enter the total subjects of "<<i+1<<" no student: ";
  int m;
  cin>>m;
  float sum=0;
  cout<<"The marks of "<<i+1<<" no student are: ";
  marks=(float*)malloc(m*sizeof(float));
  for(int i=0; i<m; i++)
  {
    cin>>marks[i];
    sum+=marks[i];
  }
  cout<<"Sum of "<<i+1<<" no of student is: " <<sum<<endl<<"Avg of "<<i+1<<" no of student is: "<<sum/m;
  cout<<endl;
 }
 return 0;

}
