#include<iostream>
using namespace std;

void firstchange(int first[3][3])
{
  cout<<"FirstArray ";
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cout<<first[i][j]*7<<" ";
    }
  }
}

void secondchange(int second[3][3])
{
  cout<<"SecondArray ";
   for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cout<<second[i][j]+5<<" ";
    }
  }
}

int main()
{
  int FirstArray[3][3] = {1,2,3,4,5,6,7,8,9};
  int SecondArray[3][3] = {1,2,3,4,5,6,7,8,9};
  firstchange(FirstArray);
  cout<<endl;
  secondchange(SecondArray);
}
