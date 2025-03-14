class Solution {
public:
    int lengthOfLastWord(string s) {
        s.resize(s.find_last_not_of(" "));
        return (s.size() - s.rfind(" "));
    }
};