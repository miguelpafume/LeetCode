class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth {0};
        for(vector<int> vec: accounts) {
            int temp_wealth {0};
            for (int i: vec) {
                temp_wealth += i;
            }
            if (temp_wealth > max_wealth) {max_wealth = temp_wealth;}
        }
        return max_wealth;
    }
};
