#include <iostream>
#include <cstdio>

using namespace std;

struct Node{
  int item;
  struct Node *next;
};

void insertAtStart(struct Node **head, int item){

  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

  new_node->item = item;

  new_node->next = (*head);

  (*head)= new_node;

}

void insertAfter(struct Node* prevNode, int newItem){

  struct Node* newNode= (struct Node*) malloc(sizeof(struct Node));

  newNode->item = newItem;

  newNode->next=prevNode->next;

  prevNode->next = newNode;
}

void insertAtEnd(struct Node** head, int newItem){

  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

  struct Node *last = *head;

  newNode->item = newItem;

  newNode->next = NULL;

  while (last->next != NULL){
    last = last->next;
  }

  last->next = newNode;
  return;
}

void printList(struct Node *node){
  while(node!=NULL){
    cout<<" "<<node->item;
    node = node->next;
  }
}

int main() {

  struct Node* head = NULL;

  insertAtStart(&head,6);
  insertAtStart(&head,5);
  insertAtStart(&head,7);

  printList(head);


}
