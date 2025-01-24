#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to compute the LCS
int longestCommonSubsequence(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    
    // Create a 2D DP table initialized to 0
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    // Fill the DP table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1]) {  // Characters match
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {  // Take the max value from previous subproblems
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    // Return the LCS length
    return dp[m][n];
}

// Main function to test the LCS function
int main() {
    string s1 = "abcde";
    string s2 = "ace";
    
    cout << "Length of LCS: " << longestCommonSubsequence(s1, s2) << endl;
    return 0;
}
