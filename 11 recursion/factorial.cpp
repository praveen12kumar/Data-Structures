// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
// }

#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << " ";
        return;
    }
    print(n --);
    cout << n << " ";
}

int main() {
    int num = 3;
    print(num);
}