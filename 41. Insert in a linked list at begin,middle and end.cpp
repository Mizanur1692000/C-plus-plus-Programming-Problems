#include<iostream>
#include<cstdio>
using namespace std;
struct Node{
  int data;
  struct Node* next;
};

void insertAtBeginning(struct Node **head,int item){
  struct Node* new_node=(struct Node*)malloc(sizeof(Node));
  new_node->data=item;
  new_node->next=(*head);
  (*head)=new_node;
}

void insertAtEnd(struct Node **head,int item){
  struct Node* new_node=(struct Node*)malloc(sizeof(Node));
  struct Node* last=*head;
  new_node->data=item;
  new_node->next=NULL;
  while(last->next!=NULL){
    last=last->next;
  }
  last->next=new_node;
  return;
}

void insertAtAfter(struct Node *head,int item){
  struct Node* new_node=(struct Node*)malloc(sizeof(Node));
  new_node->data=item;
  new_node->next=head->next;
  head->next=new_node;
}

void displayList(struct Node* node){
  while(node!=NULL){
    cout<<" "<<node->data;
    node=node->next;
  }
}
int main(){
  struct Node* head=NULL;
  insertAtBeginning(&head,4000);
  insertAtBeginning(&head,3000);
  insertAtBeginning(&head,2000);
  insertAtBeginning(&head,1000);
  cout<<"The linked list is: ";
  displayList(head);
  cout<<endl<<"The modified link list after inserting node at last: ";
  insertAtEnd(&head,7000);
  insertAtEnd(&head,8000);
  displayList(head);
  cout<<endl<<"The modified link list after inserting node at ";
  insertAtAfter(head->next->next->next,6000);
  insertAtAfter(head->next->next->next,5000);

  displayList(head);

}
