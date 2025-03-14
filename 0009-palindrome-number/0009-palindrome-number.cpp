class Solution {
public:
    bool isPalindrome(int x) {
        string y {};
        string z {to_string(x)};

        for(int i {0}; i < z.size(); i++) {
            y.insert(y.begin(), z.at(i));
        }

        return (z == y ? true : false);
    }
};