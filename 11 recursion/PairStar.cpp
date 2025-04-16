/*
Given a string S, compute recursively a new string where identical chars that are adjacent in the original 
string are separated from each other by a "*".

Sample Input 1 :
hello
Sample Output 1:
hel*lo
*/

#include <iostream>
#include<cstring>
using namespace std;

void pairStar(char input[]) {
   
    if(strlen(input) == 1){
        return;
    }

    pairStar(input + 1);

    if(input[0] == input[1]){
        int len = strlen(input);
        while(len >= 1){
            input[len + 1] = input[len];
            len--;
        }
         input[1] = '*';
    }
}

int main() {
    char input[100]; // Enough buffer to handle inserted '*'
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}
