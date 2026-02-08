class Solution {
public:
    int sumVec(vector<int> &nums) {
        int sum = 0;
        for(int &i: nums) {
            sum += i;
        }
        return sum;
    }

    int minOperations(vector<int>& nums, int k) {
        int operations = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] > 0) {
                int sum = sumVec(nums);

                if (sum == 0 || (sum % k) == 0) {
                    return operations;
                }

                nums[i]--;
                operations++;
            }

            if (nums[i] == 0) continue;
        }
        return operations;
    }
};