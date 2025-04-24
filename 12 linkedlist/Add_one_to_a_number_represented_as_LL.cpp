/*
You're given a positive integer represented in the form of a singly linked-list of digits. 
The length of the number is 'n'.

Add 1 to the number, i.e., increment the given number by one.

The digits are stored such that the most significant digit is at the head of the linked list and the least significant digit is at the tail of the linked list.

Example:
Input: Initial Linked List: 1 -> 5 -> 2

Output: Modified Linked List: 1 -> 5 -> 3
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

Node* reverse(Node*head){
    Node* curr = head;
    Node* Next = NULL;
    Node* prev = NULL;

    while(curr){
        Next =curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}


Node* addOne(Node* head){
    if(head == NULL){
        return new Node(1);
    }

    Node* curr = head;
    Node* rev = reverse(curr);
    curr = rev;
    int carry = 1;

    while(curr != NULL && carry > 0){
        int sum = curr->data + carry;
        curr ->data = sum % 10;
        carry = sum / 10;

        if(curr ->next == NULL && carry > 0){
            curr ->next = new Node(0);
        }

        curr = curr->next;
    }

    return reverse(rev);
    
}


int main(){
    Node * head = takeInput();
   
    head = addOne(head);

    print(head);

}