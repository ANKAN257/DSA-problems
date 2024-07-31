#include <iostream>
#include <vector>
using namespace std;

// Function to reduce the matrix by sampling every k-th row and column
vector<vector<char>> reduceMatrix(const vector<vector<char>>& matrix, int n, int k) {
    int newSize = n / k;
    vector<vector<char>> reducedMatrix(newSize, vector<char>(newSize));

    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            reducedMatrix[i][j] = matrix[i * k][j * k];
        }
    }

    return reducedMatrix;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<char>> matrix(n, vector<char>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }

        vector<vector<char>> reducedMatrix = reduceMatrix(matrix, n, k);

        for (const auto& row : reducedMatrix) {
            for (char val : row) {
                cout << val;
            }
            cout << endl;
        }
    }

    return 0;
}
