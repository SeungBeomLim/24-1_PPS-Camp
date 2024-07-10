// A112. 기타줄 - Baekjoon
// Greedy

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> package(M), single(M);
    for (int i = 0; i < M; i++) {
        cin >> package[i] >> single[i];
    }
    
    sort(package.begin(), package.end());
    sort(single.begin(), single.end());
    
    int sum = 0;
    while (N > 0) {
        if (N >= 6) {
            sum += min(package[0], 6 * single[0]);
            N -= 6;
        } else {
            sum += min(package[0], N * single[0]);
            N = 0;
        }
    }
    
    cout << sum;
        
    return 0;
}