// A139. �뮘吏묎린 - Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string S = "";
    cin >> S;
    
    int count0 = 0, count1 = 0;
    if (S[0] == '0')
        count0++;
    else
        count1++;
    
    for (int i = 1; i < S.length(); i++) {
        if (S[i] != S[i + 1]) {
            if (S[i] == '0')
                count0++;
            else
                count1++;
        }
    }
    
    cout << min(count0, count1) << endl;
        
    return 0;
}