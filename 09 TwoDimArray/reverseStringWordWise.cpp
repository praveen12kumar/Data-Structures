/*
Reverse the given string word wise. That is, the last word in given string should come at 1st place, 
last second word at 2nd place and so on. Individual words should remain as it is.

Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome

*/

#include <iostream>
#include <cstring>

using namespace std;

void reverse(char *input, int start, int end) {

    while(start < end){
        swap(input[start++], input[end--]);
    }

}


void reverseStringWordWise(char *input) {
    int start = 0, end = strlen(input) - 1;

    reverse(input, start, end);
    int current = -1;
    for(int i = 0; i <= end; i++) {
        if(input[i] == ' ') {
            reverse(input, current + 1, i - 1);
            current = i;
        }
    }
    reverse(input, current + 1, end);

}

int main(){
    int size = 1e6;
    char input[size];
    cout<<"Entry string: "<<endl;
    cin.getline(input, size);
    
    reverseStringWordWise(input);
    cout<<"Output: "<<input;

    return 0;
}