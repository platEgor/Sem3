#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0;
    for (int i = 2; i < n; i++) {
        if (n%i == 0){
            a = i;
        }
    }
    if (n <= 1) {
        cout << "...";
    } else if (a == 0) {
        cout << "простое";
    } else {
        cout << a;
    }
    return 0;
}