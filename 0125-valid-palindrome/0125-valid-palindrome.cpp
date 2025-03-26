#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int i = 0, n = s.size()-1;

        while (i < n) {
            if (!(isalnum(s[i]))) {
                i++;
                continue;
            }

            if (!(isalnum(s[n]))) {
                n--;
                continue;
            }

            if (isupper(s[i])) {
                s[i] += 32;
            }

            if (isupper(s[n])) {
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