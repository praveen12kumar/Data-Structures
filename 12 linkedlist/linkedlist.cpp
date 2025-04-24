#include "Node.cpp"
#include <bits/stdc++.h>
using namespace std;

Node * takeInput(){
    int data;
    cin >> data;

    Node *head = NULL;

    while(data != -1){
        Node *temp = new Node(data);

        if(head == NULL){
            head = temp;
        }
        else{
            Node *tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            tail->next = temp;
        }
        cin >> data;
    }

    return head;
}

Node * takeInput2(){
    int data;
    cin>>data;

    Node* head = NULL;
    Node* tail =  NULL;

    while(data != -1){
        Node* newNode = new Node(data);
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


void printLinkedList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    // Statically
    // Node n1(1);
    // Node* head = &n1;
    // Node n2(2);

    // n1.next = &n2;

    // while(head != NULL){
    //     cout << head->data << " ";
    //     head = head->next;
    // }


    // Dynamically

    // Node *head = new Node(10);
    // Node *n1 = new Node(20);
    // Node *n2 =  new Node(30);
    // Node *n3 =  new Node(40);
    // head->next = n1;
    // n1->next = n2;
    // n2->next = n3;

    // while(head != NULL){
    //     cout<< head->data<<" ";
    //     head = head->next;
    // }


    Node* head = takeInput2();

    printLinkedList(head);


    return 0;

}