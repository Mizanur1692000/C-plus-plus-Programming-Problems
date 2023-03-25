#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node*next;
  struct Node*prev;
};

void addAtEnd(struct Node**headRef,int value)
{
 struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
 newNode->data=value;
 newNode->next=NULL;

  if(*headRef==NULL)
  {
    newNode->prev=NULL;
    *headRef=newNode;
    return;
  }
  else
  {
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node*last=*headRef;
    while(last->next!=NULL)
    {
      last=last->next;
    }
    last->next=newNode;
    newNode->prev=last;
  }
}

void addAfter(struct Node**headRef, int value)
{

}
void addAtBeginning(struct Node**headRef,int value)
{

}
void deleteNode(struct Node**headRef,int value)
{

}
void display(struct Node*temp)
{

}
void reverselyDisplay(struct Node*temp)
{

}
int count(struct Node*temp)
{

}

int main()
{
  struct Node*head=NULL;
  int choice,no,location;
  do{
    cout<<"\n\n==Doubly linked list menu==\n";
    cout<<"1. Add at the end\n";
    cout<<"2. Add after a given location\n";
    cout<<"3. Count total number of nodes\n";
    cout<<"4. Add at beginning\n";
    cout<<"5. Delete\n";
    cout<<"6. Display\n";
    cout<<"7. Reversely display\n";
    cout<<"8. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
      case 1:
      {
        cout<<"Enter a new value: ";
        cin>>no;
        addAtEnd(&head,no);
        break;
      }
      case 2:
      {
        cout<<"Enter the location number after which you want to insert: ";
        cin>>location;
        addAfter(&head,location);
        break;
      }
      case 3:
      {
        cout<<"Total number of node is: "<<count(head);
        break;
      }
      case 4:
      {
      cout<<"Enter a new value: ";
      cin>>no;
      addAtBeginning(&head,no);
      break;
      }
      case 5:
      {
        cout<<"Enter the value to delete: ";
        cin>>no;
        deleteNode(&head, no);
        break;
      }
      case 6:
      {
        display(head);
        break;
      }
      case 7:
      {
        reverselyDisplay(head);
        break;
      }
      case 8:
      {
        exit(0);
      }
      default:
      {
      cout<<"Invalid choice!!!";
      cout<<"\nTry again!!!";
      }
    }
  }while(choice);
}
