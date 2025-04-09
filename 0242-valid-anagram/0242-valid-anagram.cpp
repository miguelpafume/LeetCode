unordered_map<char, int> stringToMap (string &str) {
    unordered_map<char, int> m;
    for (const char i: str) {
        m[i]++;
    }
    return m;
}

class Solution {
public:
    bool isAnagram(string &s, string &t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> s_map = stringToMap(s);
        unordered_map<char, int> t_map = stringToMap(t);

        return s_map == t_map;
    }
};