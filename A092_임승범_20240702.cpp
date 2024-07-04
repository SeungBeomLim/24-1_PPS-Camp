// A092. Sort Array By Parity II - Leetcode

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int evenIndex = 0, oddIndex = 1;
        while (evenIndex < nums.size() && oddIndex < nums.size()) {
            if (nums[evenIndex] % 2 == 1) {
                while (oddIndex < nums.size() && nums[oddIndex] % 2 == 1) {
                    oddIndex += 2;
                }
                if (oddIndex < nums.size()) {
                    swap(nums[evenIndex], nums[oddIndex]);
                }
            }
            evenIndex += 2;
        }

        return nums;
    }
};