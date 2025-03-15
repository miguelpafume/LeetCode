#include <vector>
#include <iterator>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = m; i < m+n; i++) {
            nums1.insert(std::next(nums1.begin(), i), nums2[i-m]);
            nums1.pop_back();
        }
        sort(nums1.begin(), nums1.end());
    }
};