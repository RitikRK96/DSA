#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        
        return false;
    }
};

int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);

    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> nums(s.begin(), s.end());

    Solution sol;
    cout << sol.containsDuplicate(nums); 

    return 0;
}


