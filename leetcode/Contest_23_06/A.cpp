#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        sort(nums.begin(), nums.end());

        double ansAvg = DBL_MAX;
        for (int i = 0; i < n; i++) {
            int j = n - i - 1;
            if (j > i) {
            cout<<nums[i]<<"     " << nums[j] << "    ";
                double avg = (nums[i] + nums[j]) / 2.0; // Ensure floating-point division
                // cout<<avg<<" "<<ansAvg<<endl;
                ansAvg = min(ansAvg, avg);
            }
            
        }

        cout <<endl<< ansAvg << endl; // Print the answer on a new line
    }

    return 0;
}
