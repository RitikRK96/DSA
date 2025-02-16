#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end()); // Store all existing numbers
        vector<int> missingNumbers;
        
        for (int i = 1; i <= nums.size(); i++) { // Check numbers from 1 to n
            if (s.find(i) == s.end()) { // If i is missing, add to result
                missingNumbers.push_back(i);
            }
        }

        return missingNumbers;
    }
};

int main() {
    vector<int> num = {4, 3, 2, 7, 8, 2, 3, 1}; // Example input
    Solution sol;
    vector<int> result = sol.findDisappearedNumbers(num);
    
    cout << "Missing numbers: ";
    for (int n : result) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
