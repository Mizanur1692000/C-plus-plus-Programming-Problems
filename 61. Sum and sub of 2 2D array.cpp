
/*
#include<iostream>
using namespace std;
int main()
{
  int a[3][3]={10,20,30,40,50,60,70,80,90};
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
*/
#include<iostream>
using namespace std;
int main()
{
  int row1,col1,row2,col2;
  cout<<"Enter the row number of A matrix: ";
  cin>>row1;
  cout<<"Enter the column number of A matrix: ";
  cin>>col1;
  int a[row1][col1];
  cout<<"Enter the values of A matrix: ";
  for(int i=0; i<row1; i++)
  {
    for(int j=0; j<col1; j++)
    {
      cout<<"a["<<i<<"]"<<"["<<j<<"]= ";
      cin>>a[i][j];
    }
    cout<<endl;
  }
  cout<<"2D array is of A matrix: "<<endl;
  for(int i=0; i<row1; i++)
  {
    for(int j=0; j<col1; j++)
    {
      cout<<"\t\t";
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<"Enter the row number of B matrix: ";
  cin>>row2;
  cout<<"Enter the column number of B matrix: ";
  cin>>col2;
  int b[row2][col2];
  cout<<"Enter the values of B matrix: ";
  for(int i=0; i<row2; i++)
  {
    for(int j=0; j<col2; j++)
    {
      cout<<"a["<<i<<"]"<<"["<<j<<"]= ";
      cin>>b[i][j];
    }
    cout<<endl;
  }
  cout<<"2D array is of B matrix: "<<endl;
  for(int i=0; i<row2; i++)
  {
    for(int j=0; j<col2; j++)
    {
      cout<<"\t\t";
      cout<<b[i][j]<<" ";
    }
    cout<<endl<<endl;
  }
  int c[row1][col1];
  cout<<"Sum of matrix A and B is: "<<endl;
  for(int i=0; i<row1; i++)
  {
    for(int j=0; j<col1; j++)
    {
      cout<<"\t\t";
      c[i][j]=a[i][j]+b[i][j];
      cout<<c[i][j];
    }
    cout<<endl;
  }
   cout<<"Subtraction of matrix A and B is: "<<endl;
  for(int i=0; i<row1; i++)
  {
    for(int j=0; j<col1; j++)
    {
      cout<<"\t\t";
      c[i][j]=a[i][j]-b[i][j];
      cout<<c[i][j];
    }
    cout<<endl;
  }
}
