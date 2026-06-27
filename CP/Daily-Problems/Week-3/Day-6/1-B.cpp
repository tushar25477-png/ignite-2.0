#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;

        int start = 0, end = n - 1;

        while (start < end) {
            if (s[start] != s[end]) {
                count++;
            } else {
                break;
            }
            start++;
            end--;
        }

        cout << n - 2 * count << endl;
    }
}
