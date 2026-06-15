#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i <= n - 3; i++) {
        if (isPrime(arr[i])) {
            count++;
            if (count == 3) {
                cout << i - 2 << endl;
                return 0;
            }
        } else {
            count = 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
