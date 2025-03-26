#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int i = 0, n = s.size()-1;

        while (i < n) {
            if (!((s[i] >= 'a' && s[i] <= 'z' ) || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))) {
                i++;
                continue;
            }

            if (!((s[n] >= 'a' && s[n] <= 'z' ) || (s[n] >= 'A' && s[n] <= 'Z') || (s[n] >= '0' && s[n] <= '9'))) {
                n--;
                continue;
            }

            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }

            if (s[n] >= 'A' && s[n] <= 'Z') {
                s[n] += 32;
            }

            if (s[i] != s[n]) {
                return false;
            }
            i++;
            n--;
        }

        return true;           
    }
};