class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        queue<int> q;
        while (!s.contains(n)) {
            s.insert(n);
            
            while (n > 0) {
                q.push(n%10);
                n /= 10;
            }
            
            while (q.size() > 0) {
                n += pow(q.front(), 2);
                q.pop();                
            }
        }
        return (n == 1 ? true : false);
    }
};