#include <iostream>
#include <vector>

vector<vector<int>> matrixMultiplication(const vector<vector<int>>& A, const vector<std::vector<int>>& B) {
    vector<vector<int>> result(A.size(), vector<int>(B[0].size(), 0));
    
    for (size_t i = 0; i < A.size(); ++i) {
        for (size_t j = 0; j < B[0].size(); ++j) {
            for (size_t k = 0; k < A[0].size(); ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    return result;
}

// Example usage:
// std::vector<std::vector<int>> C = matrixMultiplication(A, B);

