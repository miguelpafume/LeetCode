#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string t;

        for (int i = 0, n = s.size(); i < n; i++) {
            if (!((s[i] >= 'a' && s[i] <= 'z' ) || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))) {
                s.erase(s.begin()+i);
                n--;
                i--;
                continue;
            }

            if (s[i] == std::toupper(s[i])) {
                s[i] = std::tolower(s[i]);
            }

            t.insert(t.begin(), s[i]);
        }

        return s == t;
    }
};