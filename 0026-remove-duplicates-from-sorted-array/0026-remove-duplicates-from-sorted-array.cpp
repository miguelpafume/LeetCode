class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        while(j) {
            j = 0;
            for (int i {1}; i < nums.size(); i++) {
                if (nums[i] == nums[i-1]) {
                    nums.erase(nums.begin() + i);
                    j = 1;
                }
            }
        }
        return nums.size();
    }
};