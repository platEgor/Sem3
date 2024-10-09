#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *a {new int[n]};
    for (int i = 0; i < n; i++){
        *(a + i) = i * i;
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum;
    delete[] a;
    return 0;
}