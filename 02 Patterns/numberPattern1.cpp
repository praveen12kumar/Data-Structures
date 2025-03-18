/*
12345
1234
123
12
1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int j = 1;
        for(j; j <= n-i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}