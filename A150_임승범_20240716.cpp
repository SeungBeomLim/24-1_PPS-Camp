// A150. 연속합 - Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> dp(n);
    dp[0] = arr[0];
    int min_sum = dp[0];
    
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        min_sum = max(min_sum, dp[i]);
    }
    
    cout << min_sum << endl;    
    
    return 0;
}