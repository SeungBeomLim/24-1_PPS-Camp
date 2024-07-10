// A120. Find the Difference - Leetcode

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> letterCount(26, 0);
        
        for (char c : s) {
            letterCount[c - 'a']++;
        }

        for (char c : t) {
            letterCount[c - 'a']--;
            if (letterCount[c - 'a'] < 0) {
                return c;
            }
        }

        return '\0';
    }
};