// A133. Capitalize the Title - Leetcode

class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string str = "";
        string new_title = "";
        while (ss >> str) {
            string temp = "";
            for (char c : str) {
                temp += tolower(c);
            }
            if (temp.length() > 2) {
                temp[0] = toupper(temp[0]);
            }

            new_title += temp + " ";
        }
        new_title.pop_back();

        return new_title;
    }
};