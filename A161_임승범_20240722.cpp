// A161. 대충 만든 자판 - Programmers

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    unordered_map<char, int> keyPress;
    
    for (int i = 0; i < keymap.size(); i++) {
        for (int j = 0; j < keymap[i].size(); j++) {
            char ch = keymap[i][j];
            
            if (keyPress.find(ch) == keyPress.end())
                keyPress[ch] = j+1;
            else
                keyPress[ch] = min(keyPress[ch], j + 1);
        }
    }
    
    vector<int> answer;
    for (string str: targets) {
        int total_press = 0;
        bool can_type = true;
        
        for (char c : str) {
            if(keyPress.find(c) != keyPress.end())
                total_press += keyPress[c];
            else {
                can_type = false;
                break;
            }
        }
        
        if (can_type)
            answer.push_back(total_press);
        else
            answer.push_back(-1);
    }
    
    return answer;
}