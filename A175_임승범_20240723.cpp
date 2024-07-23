// A175. 옹알이 (2) - Programmers

#include <string>
#include <vector>

using namespace std;

bool isValid(string word, vector<string>& valid_sounds) {
    int n = word.size();
    int i = 0;
    string last_sound = "";
    
    while (i < n) {
        bool matched = false;
        
        for (string sound : valid_sounds) {
            int len = sound.size();
            if (i + len <= n && word.substr(i, len) == sound) {
                if (sound == last_sound)
                    return false;
                
                last_sound = sound;
                i += len;
                matched = true;
                break;
            }
        }
        if (!matched)
            return false;
    }
    
    return true;
}

int solution(vector<string> babbling) {
    vector<string> valid_sounds = {"aya", "ye", "woo", "ma"};
    int count = 0;
    
    for (string word: babbling) {
        if (isValid(word, valid_sounds))
            count++;
    }
    
    return count;
}