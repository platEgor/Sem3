#include <iostream>
using namespace std;
int main() {
    system("chcp 1251");
    string s;
    string subs;
    cin >> s;
    cin >> subs;
    cout << subs << '\n';
    cout << s << '\n';
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        string s1 = "";
        for (int j = 0; j < subs.length(); j++) {
            s1 += s[i + j];
        }
        if (subs == s1){
            count++;
        }
    }
    cout << count;
    return 0;
}