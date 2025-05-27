class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0;
        
        for(int i = 1; i <= n; i++)
            num1 += i;
        for(int i = m; i <= n; i += m)
            num1 -= i*2;
        
        return num1;
    }
};