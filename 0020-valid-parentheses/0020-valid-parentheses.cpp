#include <array>
#include <vector>

class Solution {
public:
    bool isValid(string s) {
        std::array<int, 3> open = {0, 0, 0};
        std::array<int, 3> close = {0, 0, 0};
        std::vector<int> order;
        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
                case '(': 
                    open[0] += 1;
                    order.push_back(1);
                    break;
                case '[': 
                    open[1] += 1;
                    order.push_back(2);
                    break;
                case '{': 
                    open[2] += 1;
                    order.push_back(3);
                    break;
                case ')': 
                    close[0] += 1;
                    if (order.size() == 0 || order.back() != 1) return false;
                    order.pop_back();
                    break;
                case ']': 
                    close[1] += 1;
                    if (order.size() == 0 || order.back() != 2) return false;
                    order.pop_back();
                    break;
                case '}': 
                    close[2] += 1;
                    if (order.size() == 0 || order.back() != 3) return false;
                    order.pop_back();
                    break;
                default:
                    break;
            }
        }
        if (open == close) {
            return true;
        }
        return false;
    }
};