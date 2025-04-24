/*
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, 
leaving only distinct numbers from the original list. Return the linked list sorted as well.

Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

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


Node* removeDuplicatesFromSortedList(Node*head){
    if(head == NULL){
        return head;
    }

    Node*dummy = new Node(0);
    dummy->next = head;
    Node*curr = head;
    Node*prev = dummy;

    while(curr != NULL && curr->next != NULL){
        if(curr ->data == curr->next->data){
            int duplicateData = curr->data;

            while(curr && curr->data == duplicateData){
                Node*temp = curr;
                curr = curr->next;
                delete temp;
            }
            prev->next = curr;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    Node*newHead = dummy->next;
    delete dummy;

    return newHead;

}


int main(){
    Node * head = takeInput();
    head = removeDuplicatesFromSortedList(head);

    print(head);

}