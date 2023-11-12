//DiagonalDifference
#include <iostream>
#include <cmath>
using namespace std;

int DiagonalDiff(int n, int A[100][100]) {
    int lsum = 0;
    int rsum = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                lsum += A[i][j];
            }
            
            if ((i + j) == (n - 1)) {
                rsum += A[i][j];
            }
        }
    }

    int diff = abs(lsum - rsum);
    return diff;
}

int main() {
    int n;
    cin >> n;
    
    int A[100][100];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    
    int val = DiagonalDiff(n, A);
    
    cout << "Diagonal difference: " << val << endl;

    return 0;
}
