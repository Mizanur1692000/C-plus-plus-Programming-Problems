#include <iostream>

using namespace std;

struct Node{
  //data members
  int data;
  struct Node *next;
};

/*
Head
[5]-->[6]-->NULL
*/

void insertAtBeginning(struct Node** head, int item){
  //dynamic memory allocation for new node creation
  struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));

  //add items to data members
  newNode->data=item;
  newNode->next = (*head);
  (*head)=newNode;
}

/*
Head
[5]-->[6]-->[8]-->NULL
*/

void insertAtEnd(struct Node** head, int item){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

  struct Node *last = *head;
  newNode->data=item;
  newNode->next=NULL;

  while(last->next!=NULL){
    last=last->next;
  }
  last->next=newNode;

}

/*
Head Head->next
[5]--->[6]--->[7]--->[8]-->NULL
*/


void insertAfter(struct Node* head, int item){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=item;
  newNode->next=head->next;
  head->next=newNode;

}

void displayList(struct Node *node){
  while(node!=NULL){
    cout<<" "<<node->data;
    node=node->next;
  }
}


int main() {
  struct Node* head=NULL;
  insertAtBeginning(&head,6);
  insertAtBeginning(&head,5);

  cout<<"Linked list after insert at the beginning:";
  displayList(head);


  insertAtEnd(&head,8);

  cout<<endl<<"Linked list after insert at the end:";
  displayList(head);

  insertAfter(head->next, 7);
  cout<<endl;
  displayList(head);

}
