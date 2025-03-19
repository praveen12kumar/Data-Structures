#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int space = n - i;
        for(int j = 0; j < space; j++) {
            cout << " ";
        }
        int num = 2 * i - 1;
        int p = i;
        for(int k = 0; k < num; k++){
            cout<<p;
            if(p <= 2 * i - 1){
                p++;
            }
            else{
                p--;
                cout << p;
                
            }
        }
        cout<<endl;
    }
    return 0;
}