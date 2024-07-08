// A108. 수 뒤집기 - Baekjoon

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    return str == rev_str;
}

int reverseNumber(int num) {
    string str = to_string(num);
    reverse(str.begin(), str.end());
    return stoi(str);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        
        int reversedN = reverseNumber(N);
        int sum = N + reversedN;
        
        if (isPalindrome(sum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}