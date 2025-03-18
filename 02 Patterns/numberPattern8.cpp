/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 16
*/

#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){

        int k = i+1;
        for(int j = 1; j <= i+1; j++){
            cout<<k<<" ";
            k += n - j;
        }
        cout<<endl;
    }
    return 0;
}