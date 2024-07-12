// A129. 1, 2, 3 더하기 - Baekjoon
// DP 문제, 점화식으로 풀기.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
    
        for (int i = 4; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
       
        cout << dp[n] << endl;
    }
    
    return 0;
}