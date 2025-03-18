/*
12345
2345
345
45
5
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int j = i+1;
        for(j; j <= n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}