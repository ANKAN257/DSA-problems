#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
bool checkTrailingZeros(vector<int>& nums) {
   int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            count++;
        }
    }
    if(count>=2)return true;
    else return false;


}

int main() {
    vector<int> nums = {1,2,3,4,5};
    bool result = checkTrailingZeros(nums);

    cout << (result ? "true" : "false") << endl;

    return 0;
}
