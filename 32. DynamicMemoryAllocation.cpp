#include<iostream>
using namespace std;

int main(){
  int n;
  float *marks;
  cout<<"Enter the number of students: ";
  cin>>n;
  marks=(float *)malloc(n*sizeof(float));
  cout<<"Enter the marks of "<<n<<" numbers of students: ";
  double sum=0;
  for(int i=0; i<n; i++){
    cin>>marks[i];
    sum+=marks[i];
  }
  cout<<"Sum is: "<<sum<<endl;
  cout<<"Avg is: "<<sum/n;
}
