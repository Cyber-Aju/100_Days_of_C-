//MatrixTranspose
#include <iostream>
using namespace std;

void MatrixTranspose(int n, int A[100][100]) {
    int B[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
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

    MatrixTranspose(n, A);

    return 0;
}
