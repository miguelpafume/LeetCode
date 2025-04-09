int sumNumber(int n) {
    int x = 0;
    while (n != 0) {
        x += (n%10) * (n%10);
        n /= 10;
    }
    return x;
}

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;

        while (n != 1 && !s.contains(n)) {
            s.insert(n);
            n = sumNumber(n);
        }
        return (n == 1 ? true : false);
    }
};