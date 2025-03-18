/*
1
12
123
1234
12345
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int j = 1;
        for(j ; j <= i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

