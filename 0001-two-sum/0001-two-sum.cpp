class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> positions {};
        for(int i {0}; i < nums.size(); i++) {
            for(int j {0}; j < nums.size(); j++){
                if((nums.at(i) + nums.at(j)) == target && i != j) {
                    positions.insert(positions.begin(), {j, i});
                    return positions;
                }
            }
        }
        return positions;
    }
};