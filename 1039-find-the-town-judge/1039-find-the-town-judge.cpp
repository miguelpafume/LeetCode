class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) return 1;

        unordered_map<int, bool> m1;
        unordered_map<int, int> m2;

        for (vector<int>& vec: trust) {
            m1[vec[0]] = true;
            if (m1.find(vec[1]) == m1.end()) m1[vec[1]] = false;
            m2[vec[1]]++;
        }

        for (auto& [key, value]: m1) {
            if(!value && m2[key] == n-1) {
                return key;
            }
        }
        return -1;
    }
};