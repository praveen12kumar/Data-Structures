/*
Reverse the linked list

*/

#include "Node.cpp"
#include <iostream>
using namespace std;




Node * reverse(Node* head){
    Node*curr = head;
    Node*Next = NULL;
    Node*prev = NULL;

    while(curr){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }

    return prev;
}

Node *reverseII(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node*smallans = reverseII(head->next);

    Node*tail = head->next;

    head->next = NULL;

    tail->next = head;

    return smallans;

}


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



int main(){
    Node * head = takeInput();
    int left, right;
    

    head = reverse(head);

    print(head);

}