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
        return sumVec(nums) % k;
    }
};