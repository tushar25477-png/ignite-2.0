#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, str;
        cin >> s >> str;
        int n = min(s.length(), str.length());
        for (int i = 0; i < n; i++) {
            cout << s[i] << str[i];
        }
        if (s.length() > str.length()) {
            for (int i = n; i < s.length(); i++) {
                cout << s[i];
            }
        } else {
            for (int i = n; i < str.length(); i++) {
                cout << str[i];
            }
        }
        cout << '\n';
    }
    return 0;
}