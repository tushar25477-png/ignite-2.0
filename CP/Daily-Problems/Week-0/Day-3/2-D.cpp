
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << rev << endl;
    if (rev == temp) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

