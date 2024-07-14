// A136. 문서 검색 - Baekjoon

#include <iostream>
#include <string>

using namespace std;

int main() {
    string document;
    string word;
    
    getline(cin, document);
    getline(cin, word);
    
    int count = 0, index = 0;
    while ((index = document.find(word, index)) != string::npos) {
        count++;
        index += word.length();
    }
    
    cout << count << endl;
    
    return 0;
}