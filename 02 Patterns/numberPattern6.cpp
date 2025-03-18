/*
55555
4444
333
22
1
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int j = n - i;
        int k = n-i;
        for(j; j > 0; j--){
            cout << k;
        }

        cout << endl;
    }
    return 0;

}