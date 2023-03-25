#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double num1,num2,sum,sub,multiple,div;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    sum=num1+num2;
    sub=num1-num2;
    multiple=num1*num2;
    div=num1/num2;
    cout<<setw(20)<<"Sum= "<<sum<<endl <<setw(20)<<"Sub= "<<sub<<endl <<setw(20)<<"Multiple= "<<multiple<<endl <<setw(20)<<"Div= "<<div;
    getch();
}
