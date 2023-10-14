#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    cin >> n;

    int reversed_n = reverse(n);

    if (is_prime(n) && is_prime(reversed_n)) {
        cout << "circular prime";
    } else if (is_prime(n)) {
        cout << "prime but not a circular prime";
    } else {
        cout << "not prime";
    }
    return 0;
}
