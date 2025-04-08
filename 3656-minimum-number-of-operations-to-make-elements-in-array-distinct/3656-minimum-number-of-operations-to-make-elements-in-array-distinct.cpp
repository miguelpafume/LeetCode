bool containsRepeats (const unordered_map<int, int> map) {
    for (auto& [key, count]: map) {
        if (count > 1) return true;
    }
    return false;
}

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        int operations = 0;

        for (int i: nums) { m[i]++; }

        if (!containsRepeats(m)) return operations;

        while (!nums.empty()) {
            if (nums.size() < 3) return operations+1;

            for (int i = 0; i < 3; i++) {
                m[nums[i]]--;
                if (m[nums[i]] == 0) m.erase(nums[i]);
            }
            nums.erase(nums.begin(), nums.begin()+3);
            operations++;
            if (!containsRepeats(m)) return operations;
        }
        return operations;
    }
};