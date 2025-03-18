/*
5
54
543
5432
54321
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int j = n;
        for(int k = 0; k <= i; k++){
            cout <<j--;
        }
        cout<<endl;
    }
    return 0;
}