class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr {nums[0]};
        for (int i {1}; i < nums.size(); i++) {
            arr.push_back(arr[i-1] + nums[i]); 
        }
        return arr;
    }
};