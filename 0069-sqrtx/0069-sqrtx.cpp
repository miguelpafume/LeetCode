class Solution {
public:
    int mySqrt(int x) {
        size_t k = 0;
        
        while (k <= x) {
            if (k*k > x) {
                return (k-1);
            } else {
                k++;
            }
        }
        return x;
    }
};