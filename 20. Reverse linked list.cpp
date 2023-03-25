#include <bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  struct Node *next;
  struct Node *prev;
};

void insertAtBegining(struct Node **head, int item){

  if(*head==NULL){
    struct Node* newNode = new Node;
    newNode->data=item;
    newNode->next=newNode->prev=newNode;
    *head=newNode;
    return;
  }

  struct Node *last = (*head)->prev;
  struct Node *newNode = new Node;
  newNode->data = item;

  newNode->next=*head;
  newNode->prev=last;

  last->next=(*head)->prev=newNode;
  *head=newNode;
}

void display(struct Node *head){
  struct Node *temp = head;
  cout<<"Forward:";
  while(temp->next!=head){
      cout<<" "<<temp->data;
      temp=temp->next;
  }
  cout<<" "<<temp->data<<endl;

  cout<<"Reverse:";
  Node *last = head->prev;
  temp=last;
  while(temp->prev!=last){
    cout<<" "<<temp->data;
    temp=temp->prev;
  }
  cout<<" "<<temp->data;
}

void insertBasedOnkey(struct Node **head, int key, int value){
  struct Node* newNode= new Node;
  newNode->data=value;

  struct Node *temp=*head;
  while(temp->data!=key){
    temp=temp->next;
  }
  struct Node *next= temp->next;

  temp->next = newNode;
  newNode->prev = temp;
  newNode->next = next;
  next->prev=newNode;
}

int main() {
  struct Node *start = NULL;
  insertAtBegining(&start,10);
  insertAtBegining(&start,11);
  insertAtBegining(&start,12);
  insertAtBegining(&start,13);

  insertBasedOnkey(&start,11,18);
  display(start);
}
