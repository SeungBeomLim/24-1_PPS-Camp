// A115. Maximum Number of Balloons - Leetcode

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> alphabet(26, 0);
        for (int i = 0; i < text.size(); i++) {
            alphabet[text[i] - 'a']++;
        }

        int mini = alphabet[1];
        mini = min(alphabet[0], mini);
        mini = min(alphabet[11] / 2, mini);
        mini = min(alphabet[14] / 2, mini);
        mini = min(alphabet[13], mini);

        return mini;
    }
};