#include<iostream>
#include<cstdio>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=(*head);
    (*head)=newNode;
}
void deleteLinkedList(struct Node** head, int key){
    struct Node* temp=*head, *prev;
    if(temp!=NULL && temp->data==key){
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data==key){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    return;
    prev->next=temp->next;
    free(temp);
}

void print(struct Node* node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
}


int main(){
    struct Node* head=NULL;
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    print(head);
    cout<<endl;
    int key;
    cout<<"Key= ";
    cin>>key;
    deleteLinkedList(&head,key);
    print(head);

}
