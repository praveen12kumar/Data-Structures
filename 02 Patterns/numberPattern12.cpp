/*
   1
  12
 123
1234
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        int space = n - i;
        for(space; space > 0; space--){
            cout<<" ";
        }
        int j = 1;
        for(j; j <= i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}