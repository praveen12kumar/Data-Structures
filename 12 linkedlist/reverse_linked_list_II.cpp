/*
Given the head of a singly linked list and two integers left and right where left <= right, 
reverse the nodes of the list from position left to position right, and return the reversed list.

Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]
*/


#include "Node.cpp"
#include<iostream>
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


Node* reverseLinkedListII(Node* head, int left, int right){
    if(head == NULL)return head;
    if(head && left == right) return head;

    Node* dummy = new Node(0);
    dummy->next = head;
    Node*prev = dummy;

    for(int i = 1; i < left; i++){
        prev = prev->next;
    }

    Node*start = prev->next;

    Node*end = start;

    for(int i = left; i < right; i++){
        end = end->next;
    }

    Node* Next = end ->next;
    end->next = NULL;

    prev->next = reverse(start);

    start->next = Next;

    head = dummy->next;

    return head;

}


int main(){
    Node * head = takeInput();
    int left, right;
    cout<<"Enter left: ";
    cin>>left;

    cout<<"Enter right: ";
    cin>>right;

    head = reverseLinkedListII(head, left, right);

    print(head);

}