#include<iostream>
using namespace std;
struct student{
  int roll;
  char name[30];
  int age;
  struct student *next;
};

int main(){
  struct student n1,n2,n3,n4;
  struct student *p;


  cin>>n1.roll>>n1.name>>n1.age;
  cin>>n2.roll>>n2.name>>n2.age;
  cin>>n3.roll>>n3.name>>n3.age;
  cin>>n4.roll>>n4.name>>n4.age;

  n1.next=&n2;
  n2.next=&n3;
  n3.next=&n4;
  n4.next=NULL;

  p=&n1;
  while(p!=NULL){
    cout<<p->roll<<" "<<p->name<<" "<<p->age<<endl;
    p=p->next;
  }

}
