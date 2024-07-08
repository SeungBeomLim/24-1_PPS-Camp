// A101. Fair Candy Swap - Leetcode

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for (int i : aliceSizes)
            sumA += i;
        for (int j : bobSizes)
            sumB += j;

        int diff = (sumA - sumB) / 2;
        for (int i = 0; i < aliceSizes.size(); i++) {
            for (int j = 0; j < bobSizes.size(); j++) {
                if (aliceSizes[i]  == bobSizes[j] + diff) {
                    return {aliceSizes[i], bobSizes[j]};
                }
            }
        }

        return {};
    }
};