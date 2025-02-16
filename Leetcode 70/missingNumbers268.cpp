#include <iostream>
#include <vector>
#include <algorithm> // ✅ Corrected header
using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        
        // sort(nums.begin(), nums.end()); 

        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != i) {
        //         return i;
        //     }
        // }

        // return nums.size(); 

        int n = nums.size();
        int originalSum = n*(n+1)/2;

        int sum = 0;
        for (int i = 0; i< n; i++){
            sum+=nums[i];
        }
        return originalSum - sum;
    }
};

int main() {
    vector<int> nums = {0, 1, 3, 4, 5, 6, 7}; // ✅ Missing `2`
    Solution sol;
    cout << "Missing Number: " << sol.missingNumber(nums) << endl;
    return 0;
}
