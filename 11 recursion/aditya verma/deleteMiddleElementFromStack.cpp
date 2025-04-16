/*
You are having a stack "ARR" of size 'N+1', your task is to delete the middlemost element so that the size of resulting stack is 'N'.

A stack is a linear data structure where both insertion and deletion of elements take place at the top. It follows FILO (First In Last Out) or LIFO (Last In First Out) approaches. Books piled on top of each other is an example of a stack, where you can only remove a single book at a time, which is at the top of the stack. Likewise, you can only add a single book at a time, on the top of the stack only.

Example :-
INPUT : ARR [ ] = [ 1 , 2 , 3 , 4 , 5 ] , N = 4
OUTPUT: ARR [ ] = [ 1 , 2 , 4,  5 ]
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void helper(stack<int>&stack, int k){
    if(k == 0){
       stack.pop();
       return;
    }
 
    int val = stack.top();
    stack.pop();
    helper(stack, k-1);
    stack.push(val);
 }
 
 void deleteMiddle(stack<int>&inputStack, int N){
     
    // Write your code here
    if(inputStack.size() == 0)
       return;
 
    int k = int(N/2);
 
    helper(inputStack, k);
    
 }

 int main(){
     stack<int>stack;
     int size;
     cout<<"Enter size of stack";
     cin>>size;
     for(int i = 0; i < size; i++){
        int val;
        cin>>val;
        stack.push(val);
     }
     deleteMiddle(stack, 5);
     while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
     }
 }
