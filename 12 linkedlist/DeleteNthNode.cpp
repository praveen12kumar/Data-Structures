#include "Node.cpp"
#include<iostream>
using namespace std;


Node* takeInput(){
    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;
    
    Node*head = NULL;
    Node*tail = NULL;

    while(data != -1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


Node* deleteNthNode(Node*head, int position, int data){
    if(head == NULL) return head;

    if(position == 0){
        Node* temp = head;
        head = head->next;
        delete  temp;
        return head;
    }

    Node* curr = head;
    int count = 0;

    while(curr != NULL && count < position -1){
        curr = curr->next;
        count++;
    }

    if(curr != NULL && curr->next != NULL){
        Node * nodeToDelete = curr->next;
        curr->next = nodeToDelete->next;
        delete nodeToDelete;
    }
    return head;

}


int main(){
    Node * head = takeInput();
    cout<<"Enter position: "<<endl;
    int position;
    cin>>position;
    cout<<"Enter data: ";
    int data;
    cin>>data;
    head = deleteNthNode(head, position, data);

    print(head);

}