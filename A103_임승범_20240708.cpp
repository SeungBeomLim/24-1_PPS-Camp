// A103. Unique Morse Code Words - Leetcode
// 중복 string은 unordered_set 사용

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> st;
        vector<string> mores = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string temp = "";
        for (string word: words) {
            temp = "";
            for (char c : word) {
                temp += mores[c - 'a'];
            }
            st.insert(temp);
        }

        return st.size();
    };
};