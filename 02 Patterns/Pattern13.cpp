/*
    *
   ***
  *****
 *******
*********
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        int space = n - i;

        for(int j = 0; j < space; j++){
            cout << " ";
        }

        int star = 2 * i - 1;

        for(int k = 0; k < star; k++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}