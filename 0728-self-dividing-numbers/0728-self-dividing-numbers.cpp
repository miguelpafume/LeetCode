class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> numbers;
        int a;

        for (int i = left; i <= right; i++) {
            int t = i;

            while (t > 0) {
                a = t%10;
                
                if (a == 0 || i % a != 0) {
                    break;
                }

                t /= 10;
            }

            if (t == 0) {
                numbers.push_back(i);
            }
        }
        return numbers;
    }
};