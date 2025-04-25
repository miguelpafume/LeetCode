class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) return 1;

        vector<int> data(n+1);

        for (vector<int>& v: trust) {
            data[v[0]]--;
            data[v[1]]++;
        }

        for (int i = 0; i < data.size(); i++) {
            if(data[i] == n-1) return i;
        }
        return -1;
    }
};