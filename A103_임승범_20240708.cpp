// A103. Unique Morse Code Words - Leetcode
// �ߺ� string�� unordered_set ���

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