// A121. Degree of an Array - Leetcode

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> left, right, count;
        for (int i = 0; i < nums.size(); i++) {
            if (left.find(nums[i]) == left.end()) {
                left[nums[i]] = i;
            }
            right[nums[i]] = i;
            count[nums[i]]++;
        }
        
        int degree = 0;
        for (const auto& kv : count) {
            degree = max(degree, kv.second);
        }
        
        int minLength = nums.size();
        for (const auto& kv : count) {
            if (kv.second == degree) {
                minLength = min(minLength, right[kv.first] - left[kv.first] + 1);
            }
        }
    
    return minLength;
    }
};