// A122. 796. Rotate String - Leetcode

class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int i = 0; i < s.length(); i++) {
            if (s == goal)
                return true;
            for (int j = 0; j < s.length() - 1; j++) {
                swap(s[j], s[j + 1]);
            }
        }

        return false;
    }
};