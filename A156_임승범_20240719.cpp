// A156. 나무 자르기 - Baekjoon

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<long long> treeHeight(N);
    long long maxHeight = 0;
    for (int i = 0; i < N; i++) {
        cin >> treeHeight[i];
        if (treeHeight[i] > maxHeight)
            maxHeight = treeHeight[i];
    }
    
    long long left = 1, right = maxHeight, answer = 0;
    while (left <= right) {
        long long mid = left + (right - left) / 2, getHeight = 0;
        for (int i = 0; i < N; i++) {
            if (treeHeight[i] > mid)
                getHeight += treeHeight[i] - mid;
        }
        
        if (getHeight >= M) {
            answer = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    
    cout << answer << endl;
    
    return 0;
}