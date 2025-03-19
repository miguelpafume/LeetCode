class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer {};

        for (int i {1}; i <= n; i++) {
            string str {""};
            if (i%3 == 0) {
                str.append("Fizz");
            }
            if (i%5 == 0) {
                str.append("Buzz");
            }
            (str != "") ? answer.push_back(str) : answer.push_back(to_string(i));
        }
        
        return answer;
    }
};
