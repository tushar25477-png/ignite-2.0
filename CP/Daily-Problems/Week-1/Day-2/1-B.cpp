#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string text, pattern;
    cin >> text >> pattern;
    int n = pattern.size();
    vector<int> lps(n, 0);
    for (int i = 1, len = 0; i < n; ) {
        if (pattern[i] == pattern[len]) {
            lps[i] = ++len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    int count = 0;
    for (int i = 0, j = 0; i < text.size(); ) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }
        if (j == n) {
            count++;
            j = lps[j - 1];
        } else if (i < text.size() && text[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    cout << count;
    return 0;
}