#include <iostream>
using namespace std;
int main() {
    int n0 = 0;
    int n;
    while (true) {
        cin >> n;
        if (n > 0){
            n0 += n;
        } else if (n == 0){
            break;
        }
        cout << n0 << "\n";
    }
    return 0;
}