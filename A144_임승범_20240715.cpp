// A144. 모음 사전 - Programmers

#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(string word) {
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    int index = 0, multiplier = 0;
    
    for (int i = 0; i < word.length(); i++) {
        char c = word[i];
        int position = find(vowels.begin(), vowels.end(), c) - vowels.begin();
        
        for (int j = 0; j < 5 - i; j++) {
            multiplier += pow(5, j);
        }
        
        index += position * multiplier + 1;
        
        multiplier = 0;
    }
    
    return index;
}