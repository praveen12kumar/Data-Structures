#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    int result = (*p++) + (++*p) + (*++p) + (*p++);
    cout << result << endl;
    return 0;
}
