// A125. 로프 - Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> rope(N);
    for (int i = 0; i < N; i++) {
        cin >> rope[i];
    }
    
    sort(rope.begin(), rope.end());
    
    int maxW = 0;
    for (int i = 0; i < N; i++) {
        maxW = max(maxW, rope[i] * (N - i));
    }
    
    cout << maxW << endl;
    
    return 0;
}