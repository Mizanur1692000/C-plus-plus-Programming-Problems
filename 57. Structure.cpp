#include<iostream>
using namespace std;




struct Time{
    int hour;
    int minute;
    int second;
  };


void universalTime(const Time &);
void standardTime(const Time &);

int main(){
  Time dinnerTime;
  dinnerTime.hour=18;
  dinnerTime.minute=30;
  dinnerTime.second=0;

  universalTime(dinnerTime);
  standardTime(dinnerTime);
}




void universalTime(const Time &t){
  cout<<"Dinner time in universal time is= "<<t.hour<<" : "<<t.minute<<" : "<<t.second<<endl;
}



void standardTime(const Time &t){
  int hr;
  hr=(t.hour==0 || t.hour==12)?12:t.hour%12;
  cout<<hr<<" : "<<t.minute<<" : "<<t.second<<(t.hour<12?" AM":" PM")<<endl;
}

