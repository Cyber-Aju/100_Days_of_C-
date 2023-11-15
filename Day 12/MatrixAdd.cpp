#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixAddition(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    vector<vector<int>> result;
    
    for (size_t i = 0; i < A.size(); ++i) {
        vector<int> row;
        for (size_t j = 0; j < A[i].size(); ++j) {
            row.push_back(A[i][j] + B[i][j]);
        }
        result.push_back(row);
    }
    
    return result;
}

// Example usage:
// std::vector<std::vector<int>> C = matrixAddition(A, B);

