#include <iostream>

using namespace std;

int main() {
    int n = 5;  // Number of rows in the pattern

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i == j) {
                cout << i << " ";  // Print i for diagonal elements
            } else if (i + j == n + 1 && i <= j) {  // Print descending numbers from the right
                cout << n - j + 1 << " ";
            } else if (i <= j && i + j <= n) {  // Print ascending numbers from the left and bottom left
                cout << 10 - i + j << " ";
            } else {
                cout << "  ";  // Print spaces for other elements
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

