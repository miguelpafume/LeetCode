#include <vector>

vector<int> transformBase(int number, int &base) {
    vector<int> based;
    while (number > 0) {
        based.push_back(number%base);
        number /= base;
    }
    return based;
}

bool isPalindrome(vector<int> number) {
    for (int i = 0; i < (number.size()/2); i++) {
        if (number[i] != number[number.size()-1-i]) {
            return false;
        }
    }
    return true;
}

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= (n-2); i++) {
            vector<int> basedNumber = transformBase(n, i);
            if (!isPalindrome(basedNumber)) {
                return false;
            }
        }
        return true;
    }
};