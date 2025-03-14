class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        while(find(nums.begin(), nums.end(), val) != nums.end()) {
            for (int i {0}; i < nums.size(); i++) {
                if(nums[i] == val) {
                    nums.erase(nums.begin() + i);
                }
            }
        }
        return nums.size();
    }
};