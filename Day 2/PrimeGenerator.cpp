#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter range to generate Prime numbers: ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
