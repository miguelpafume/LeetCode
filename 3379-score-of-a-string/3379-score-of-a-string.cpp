class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] > s[i+1]) {
                score += (int)s[i] - (int)s[i+1];
            } else {
                score += (int)s[i+1] - (int)s[i];
            }
        }
        return score;
    }
};