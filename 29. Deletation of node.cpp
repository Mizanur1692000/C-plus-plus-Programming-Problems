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

void iterativeDeleteLinkedList(struct Node **head, int key){
  struct Node* temp=*head,*prev;
  if(temp!=NULL && temp->data==key){
    *head=temp->next;
    free(temp);
    return;
  }
  while(temp!=NULL && temp->data!=key){
    prev=temp;
    temp=temp->next;
  }
  if(temp==NULL){
    return;
  }
  prev->next=temp->next;
  free(temp);
}

int nodeCount(struct Node* head){
  int count=0;
  struct Node* temp=head;
  while(temp!=NULL){
    count++;
    temp=temp->next;
  }
  return count;
}
void deleteCompleteList(struct Node** head){
  struct Node* temp=*head;
  struct Node* next;

  while(temp!=NULL){
    next=temp->next;
    free(temp);
    temp=next;
  }
  *head=NULL;
}

void print(struct Node* node){
  while(node!=NULL){
    cout<<" "<<node->data;
    node=node->next;
  }
}

int main(){
  struct Node* head=NULL;
  insertAtBeginning(&head, 8);
  insertAtBeginning(&head, 7);
  insertAtBeginning(&head, 6);
  insertAtBeginning(&head, 5);
  cout<<"List before deletion:";
  print(head);
  cout<<endl;
  cout<<"Total number of node is: "<<nodeCount(head)<<endl;
  int key;
  cout<<"Enter the key value:";
  cin>>key;
  iterativeDeleteLinkedList(&head,key);
  cout<<"List after deletion:";
  print(head);
  deleteCompleteList(&head);

}
