class Solution {
public:
    int strStr(string haystack, string needle) {
        int temp {0};
        for (int i {0}; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                temp = 0;
                for (int j {0}; j < needle.length(); j++) {
                    if (needle[j] != haystack[j+i]) {
                        break;
                    }
                    temp++;
                }
                if (temp == needle.length()) {
                    return i;
                }
            }
        }
        return -1;
    }
};