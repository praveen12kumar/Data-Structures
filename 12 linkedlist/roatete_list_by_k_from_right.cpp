/*
Given the head of a linked list, rotate the list to the right by k places.

Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

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


Node* rotateListByK(Node*head, int k){
    if(head == NULL || k == 0){
        return head;
    }

    Node*last = head;
    Node*curr = head;
    int total = 1;

    while(last->next != NULL){
        total++;
        last = last->next;
    }
    last->next = head;

    k = k % total;
    k = total - k;

    while(k > 1){
        k--;
        curr = curr->next;
    }

    head = curr->next;
    curr->next = NULL;
    return head;

}


int main(){
    Node * head = takeInput();
    cout<<"Enter K: "<<endl;
    int k;
    cin>>k;

    head = rotateListByK(head, k);

    print(head);

}