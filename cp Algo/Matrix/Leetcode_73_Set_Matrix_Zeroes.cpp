#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<pair<int, int>> index;

    // Find all positions of zeros in the matrix
    for (int i = 0; i < n;  i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                index.push_back({i, j});
            }
        }
    }

    // Set rows and columns to zero
    for (auto& pos : index) {
        int row = pos.first;
        int col = pos.second;

        // Set the entire row to zero
        for (int j = 0; j < m; j++) {
            
            matrix[row][j] = 0;
        }

        // Set the entire column to zero
        for (int i = 0; i < n; i++) {
           
            matrix[i][col] = 0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    // Print the modified matrix
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
