/*
54321
4321
321
21
1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int j = n - i;
        for(j; j > 0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

