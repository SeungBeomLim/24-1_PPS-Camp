// A155. ?ûú?Ñ† ?ûêÎ•¥Í∏∞ - Baekjoon

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> K >> N;
    
    vector<int> LAN_Length(K);
    long long maxLen = 0;
    for (int i = 0; i < K; i++) {
        cin >> LAN_Length[i];
        if (LAN_Length[i] > maxLen)
            maxLen = LAN_Length[i];
    }
    
    long long left = 1, right = maxLen;
    long long answer = 0;
    while (left <= right) {
        long long mid = left + (right - left) / 2, count = 0;
        
        for (int i = 0; i < K; i++)
            count += LAN_Length[i] / mid;
        
        if (count >= N) {
            answer = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    
    cout << answer << endl;
    
    return 0;
}