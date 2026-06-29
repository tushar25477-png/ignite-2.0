#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int nth_prime(int n) {
    // WRITE YOUR BRILLIANT CODE HERE
    const int LIMIT = 100000;
    vector<int> prime(LIMIT + 1, 1);

    prime[0] = prime[1] = 0;

    for (int i = 2; i*i <= LIMIT + 1; i++) {
        if (prime[i] == 0) continue;
        
        for (int j = i*i; j <= LIMIT; j += i) {
                prime[j] = 0;
        }
        
    }

    int count = 0;
    for (int i = 2; i <= LIMIT; i++) {
        if (prime[i] == 1) count++;

        if (count == n) return i;
    }
    return 0;
}

void ignore_line() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    int n;
    std::cin >> n;
    ignore_line();
    int res = nth_prime(n);
    std::cout << res << '\n';
}
