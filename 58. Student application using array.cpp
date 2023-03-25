#include<iostream>
using namespace std;
int main()
{
  int n,sum=0;
  double avg;
  cout<<"Enter the total number of students: ";
  cin>>n;
  int students[n];
  cout<<"The numbers of the students are: ";
  int max=students[0],min=students[0];
  for(int i=0; i<n; i++)
  {

    cin>>students[i];
    sum=sum+students[i];
    if(max<students[i])
    {
      max=students[i];
    }
    if(min>students[i])
    {
      min=students[i];
    }

  }
  cout<<"Sum= "<<sum<<endl<<"Avg= "<<(double)sum/n<<endl<<"Max= "<<max<<endl<<"Min= "<<min<<endl;
  return 0;
}
