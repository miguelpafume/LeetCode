class Solution {
public:
    int trailingZeroes(int n) {
        int x = 0;

        while (true) {
            if (n / 5 > 0) {
                x += n / 5;
                n /= 5;
            } else {
                return x;
            }
        }
    }
};