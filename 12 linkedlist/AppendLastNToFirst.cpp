/*
Problem statement
You have been given a singly linked list of integers along with an integer 'N'. 
Write a function to append the last 'N' nodes towards the front of the singly linked list 
and returns the new head to the list.

Hint:
Identify how many pointers you require and try traversing them to right places 
and connect nodes accordingly also don't forget to disconnect what's required else it could create cycles.

Sample input:
1 2 3 4 5 -1
3

Sample output:
3 4 5 1 2
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

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(head == NULL)return head;
    if(n==0)return head;

    Node*fast = head;
    Node*slow = head;
    Node*initialHead = head;
    int count = 0;
    while(count < n){
        fast = fast->next;
        count++;
    }

    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }

    Node*temp = slow->next;
    slow->next = NULL;
    fast->next = initialHead;
    head = temp;

    return head;


}


int main(){
    Node * head = takeInput();
    cout<<"Enter position: "<<endl;
    int position;
    cin>>position;
    
    head = appendLastNToFirst(head, position);

    print(head);

}







