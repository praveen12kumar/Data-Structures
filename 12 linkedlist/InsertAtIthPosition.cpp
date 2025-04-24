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


Node* insertAtPostion(Node*head, int position, int data){
    Node * newNode = new Node(data);
    if(position == 0){
        newNode->next = head;
        head = newNode;
    }

    Node*temp = head;

    while(position != 1){
        temp = temp->next;
        position--;
    }

    Node* NEXT = temp->next;
    temp->next = newNode;
    newNode->next = NEXT;

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
    head = insertAtPostion(head, position, data);

    print(head);

}