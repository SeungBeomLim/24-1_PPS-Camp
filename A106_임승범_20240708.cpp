// A106. 등장하지 않는 문자의 합 - Baekjoon

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    for (int i = 0; i < T; i++) {
        unordered_set<char> ust;
        string line;
        
        getline(cin, line);
        for (char c: line) {
            if (c >= 'A' && c <= 'Z') {
                ust.insert(c);
            }
        }
        
        int sum = 0;
        for (char c: ust) {
            sum += c;
        }
        sum = 2015 - sum;
        cout << sum << endl;
    }
    
    
    return 0;
}