int romanTable (char str) {
    switch (str) {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
    }
}

class Solution {
public:
    int romanToInt(string s) {
        int previous {0}, total {0};
        for (int i {static_cast<int>(s.size())}; i >= 0; i--) {
            int j {romanTable(s[i])};
            (j >= previous) ? total += j : total -= j;
            previous = j;
        }
    return total;
    }
};