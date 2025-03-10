// A097. Two Sum II - Input Array is Sorted - Leetcode

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int left = 0, right = numbers.size() - 1;

        while (true) {
            if (numbers[left] + numbers[right] > target)
                right--;
            else if (numbers[left] + numbers[right] == target) {
                result.push_back(left + 1);
                result.push_back(right + 1);
                break;
            }
            else {
                left++;
            }
        }

        return result;
    }
};