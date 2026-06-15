#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int zoneA = 0, zoneB = 0;
    for (int i = 0; i < n; i++) {
        if (i & 1) {
            zoneB += arr[i];
        } else {
            zoneA += arr[i];
        }
    }

    if (zoneA >= zoneB) {
        cout << "Zone A\n";
    } else {
        cout << "Zone B\n";
    }
    
    return 0;
}
