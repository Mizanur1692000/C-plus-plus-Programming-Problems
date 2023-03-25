#include<iostream>
using namespace std;
class Ticket{
  private:
  int totalNumberofTicket;
  double totalAmount;
  public:
  void input();
  void calculate();
  void display();
};
void Ticket::input(){
  cout<<"Enter the numbers of persons to buy ticket: ";
  cin>>totalNumberofTicket;
}
void Ticket::calculate(){
  if(totalNumberofTicket<10){
    totalAmount=(totalNumberofTicket*2);
    }
    else if(totalNumberofTicket>=10){
      totalAmount=(totalNumberofTicket*2);
      totalAmount=(totalAmount-(totalAmount*.1));
    }
    else if(totalNumberofTicket>20){
      totalAmount=(totalNumberofTicket*2);
      totalAmount=(totalAmount-(totalAmount*.2));
    }
}
void Ticket::display(){
    cout<<"Total amount for your ticket: "<<totalAmount<<" "<<"BDT";
    cout<<endl;
}
int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  Ticket num[n];
  for(int i=0; i<n; i++){
    num[i].input();
    num[i].calculate();
    num[i].display();
  }
}