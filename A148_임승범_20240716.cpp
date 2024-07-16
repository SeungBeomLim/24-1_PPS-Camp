// A148. 단어의 개수 - Baekjoon

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    stringstream ss(line);
    int word_count = 0;
    while(ss >> line) {
        word_count++;
    }
    
    cout << word_count << endl;
    
    return 0;
}