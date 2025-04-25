class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) return 1;

        unordered_map<int, int> m;

        for (vector<int>& vec: trust) {
            m[vec[0]]--;
            m[vec[1]]++;
        }

        for (auto& [key, value]: m) {
            if(value == n-1) {
                return key;
            }
        }
        return -1;
    }
};