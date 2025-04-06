/*
For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous

Sample Input 1:
abc
Sample Output 1:
a 
ab 
abc 
b 
bc 
c 
*/

#include <iostream>
#include<cstring>
using namespace std;


void printSubstrings(char input[]) {
    

    for(int j = 0; input[j]!='\0' ; j++) {
        for(int k = j ; input[k]!='\0' ; k++) {
            int start = j, end = k;
            char output[10];
            int x = 0;
            for(int i = start; i <= end; i++) {
                output[x++] = input[i];
            }
            output[x] = '\0';
            cout<<output<<endl;
        }
    }
}

int main(){
    int size = 1e6;
    char input[size];
    cout<<"Entry string: "<<endl;
    cin.getline(input, size);
    
    printSubstrings(input);

    return 0;
}