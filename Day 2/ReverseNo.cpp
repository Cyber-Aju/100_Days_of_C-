#include <iostream>
using namespace std;

int Reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter Number to reverse: ";
    cin >> n;

    int reversed = Reverse(n);
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
