#include <string>
#include <bitset>
#include <algorithm>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::string str = std::bitset<32>(n).to_string();
        
        std::reverse(str.begin(), str.end());
        
        uint32_t num = std::stoul(str, nullptr, 2);

        return num;
    }
};