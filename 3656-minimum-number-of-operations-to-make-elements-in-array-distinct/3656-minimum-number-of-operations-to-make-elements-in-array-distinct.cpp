#include <unordered_set>

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s;
        int op = 0;
        int i = 0;
        while (i < nums.size()) {
            if (s.contains(nums[i])) {
                op++;
                nums.erase(nums.begin(), (nums.size() >= 3 ? nums.begin()+3 : nums.end()));
                s.clear();
                i = 0;
            } else {
                s.insert(nums[i]);
                i++;
            }
        }
        return op;
    }
};