/*
You have been given a head to a singly linked list of integers. 
Write a function check to whether the list given is a 'Palindrome' or not.

Sample Input 1 :
1
9 2 3 3 2 9 -1
Sample Output 1 :
true

Sample Input 2 :
2
0 2 3 2 5 -1
-1
Sample Output 2 :
false
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


Node*reverse(Node*head){
    Node*curr = head;
    Node*prev = NULL;
    Node*Next = NULL;

while(curr != NULL){
    Next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = Next;
}

return prev;

}


bool isPalindrome(Node *head){
    //Write your code here
    if(head == NULL || head->next == NULL){
        return true;
    }
    Node*fast = head;
    Node*slow = head;

    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next ->next;
    }



    Node* head2 = reverse(slow);

    while(head != NULL && head2 != NULL){
        if(head->data != head2->data){
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }

    return true;
    }



int main(){
    Node * head = takeInput();
    
    bool checkPalindrome = isPalindrome(head);

    cout<<checkPalindrome<<endl;
}


