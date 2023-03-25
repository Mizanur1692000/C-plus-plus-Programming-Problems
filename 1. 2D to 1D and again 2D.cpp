#include<iostream>
using namespace std;
int main()
{
  cout<<"2D Array: "<<endl;
  int a[5][5],row=5,col=5,n,m,i=0;
  for(n=0; n<row; n++)
  for(m=0; m<col; m++)
  a[n][m]=++i;
  for(n=0; n<row; n++){
    for(m=0; m<col; m++){
      cout<<a[n][m]<<"  ";
    }
    cout<<endl;
  }
  cout<<"2D Array to 1D Array conversation: "<<endl;
  int b[row*col];
  for(n=0; n<row; n++){
  for(m=0; m<col; m++){
  b[n*col+m]=a[n][m];
  }
  }
  for(n=0; n<(row*col); n++)
  cout<<b[n]<<"  ";
  cout<<endl;
  cout<<"Again 2D conversation: "<<endl;
  int c[row][col];
  for(n=0; n<row; n++){
    for(m=0; m<col; m++){
      c[n][m]=b[n*col+m];
    }
  }
  for(n=0; n<row; n++){
    for(m=0; m<col; m++){
      cout<<c[n][m]<<"  ";
    }
    cout<<endl;
  }
}