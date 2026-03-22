class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());

        int prodLeft = 1;
        for (int i = 0; i < nums.size(); i++) {
            answer[i] = prodLeft;
            prodLeft *= nums[i];
        }

        int prodRight = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            answer[i] *= prodRight;
            prodRight *= nums[i];
        }

        return answer;
    }
};