/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
*/

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


Node* deleteNthNodeFromEnd(Node*head, int n){
    if(head == NULL || n == 0){
        return head;
    }

    Node*fast = head;
    Node*slow = head;

    for(int i = 0; i < n; i++){
        fast = fast->next;
    }

    // if fast reaches to the last node
    if(fast == NULL){
        Node*temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    Node*temp = slow->next;
    slow->next = temp->next;

    delete temp;

    return head;    

}


int main(){
    Node * head = takeInput();
    cout<<"Enter position: "<<endl;
    int position;
    cin>>position;
    head = deleteNthNodeFromEnd(head, position);

    print(head);

}