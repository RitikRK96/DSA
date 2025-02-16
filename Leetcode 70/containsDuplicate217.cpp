#include <bits/stdc++.h>
#include <vector>
#include <unordered_set>
using namespace std;



class Solution{
public:
    bool containsDuplicate(vector<int> &nums){
        unordered_set<int> seen; // Step 1: Create an empty hash set to store unique numbers

        for (int num : nums){ // Step 2: Iterate through each element in the input array
            if (seen.count(num)){                // Step 3: Check if the number is already in the set
                return true; // Step 4: If found, return true immediately (duplicate detected)
            }
            seen.insert(num); // Step 5: Otherwise, insert the number into the set
        }

        return false; // Step 6: If loop completes, return false (no duplicates found)
    }
};


int main(){
    vector<int> nums = {1,2,3,4,2};
    Solution sol;
    cout << sol.containsDuplicate(nums) << endl;
}