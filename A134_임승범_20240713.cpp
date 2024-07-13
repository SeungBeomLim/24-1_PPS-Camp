// A134. Reverse Prefix of Word - Leetcode

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int range = -1;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                range = i;
                break;
            }
        }

        string result = "";
        if (range != -1) {
            for (int i = 0; i <= range; i++) {
                result += word[i];
            }
            reverse(result.begin(), result.end());
            for (int i = range + 1; i < word.length(); i++) {
                result += word[i];
            }
        }
        else {
            result += word;
        }

        return result;
    }
};